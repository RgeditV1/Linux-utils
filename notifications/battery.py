#!/usr/bin/env python3
import sys
from pathlib import Path
import time

# Add the local vendored plyer package to sys.path so it can be imported
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'external' / 'plyer'))
from plyer import notification

last_notification: bool = False # for securing not spam

BATTERY_PATH = {
    "status": Path("/sys/class/power_supply/BAT0/status"),
    "capacity": Path("/sys/class/power_supply/BAT0/capacity"),
}


def get_battery_level() -> int:
    try:
        return int(BATTERY_PATH["capacity"].read_text().strip())
    except (FileNotFoundError, ValueError):
        return -1


def is_charging() -> bool:
    try:
        return BATTERY_PATH["status"].read_text().strip() == "Charging"
    except FileNotFoundError:
        return False


def show_notification(level: int, charging: bool) -> None:
    if charging:
        title = "Batería cargando"
        message = f"La batería está al {level}%"
    else:
        title = "Batería baja"
        message = f"Queda un {level}% de batería"

    notification.notify(
        title=title,
        message=message,
        timeout=5,
    )


def check_battery() -> None:
    global last_notification

    charging = is_charging()

    if charging and last_notification is not True:
        level = get_battery_level()
        show_notification(level, True)
        last_notification = True


    elif not charging:
        last_notification = False


if __name__ == "__main__":
    while True:
        check_battery()
        time.sleep(1)