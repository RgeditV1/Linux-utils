import subprocess
from pathlib import Path
ruta = Path.cwd() / 'links.txt'
carpeta = Path.cwd() / 'Musica'
carpeta.mkdir(exist_ok=True)
lista= []

'''
    AUN NO TIENE ORGANIZADOR POR CARPETAS PERO QUIEN SABE SI ALGUN DIA ME VEO EN LA NECESIDAD DE HACERLO
    PRIMERO QUE NADA DEBES TENER links.txt SI O SI, A MENOS QUE MODIFIQUES ESTE SCRIPT

    EN LA CARPETA DEBES AGREGAR LOS LINKS QUE QUIERES DESCARGAR, TAMBIEN PUEDE DESCARGAR PLAYLIST ENTERAS
    SIEMPRE Y CUANDO ESTEN PUBLICAS....

    OJO, EL SCRIPT TIENE UN LIMITADOR DE DESCARGAS, ASI QUE TENDRAS QUE AJUSTARLA SI QUIERES DESCARGAR CIERTOS
    ARCHIVOS MP3 O DESCARGARLO TODO, AJUSTALO CON --PLAYLIST-ITEMS EL NUMERO QUE ESTA DESPUES
'''


def yt_dlp_installer(func):
    def wrapper():
        try:
            check = subprocess.run( ["yt-dlp", "--version"], capture_output=True,
                                       text=True, check=True )
            print(f"yt-dlp está instalado. Versión: {check.stdout.strip()}")
            func()
            print('[*] Descarga Finalizada con exito')
        except FileNotFoundError:
            print("yt-dlp no está instalado en el sistema.")
            print('Intentar Instalacion')
            subprocess.run(['sudo','pacman','-Syu'])
            subprocess.run(['sudo','pacman','-S','yt-dlp'])
            func()
            print('[*] Descarga Finalizada con exito')
    return wrapper

@yt_dlp_installer
def descargar():
   descargados = 0
   with open (ruta, 'r', encoding='utf-8') as file:
       for lista in file:
            url = lista.strip()
            if url:  # evita líneas vacías
                 resultado = subprocess.run(['yt-dlp', '-x', '--audio-format', 'mp3', '--playlist-items', '1-25',
                                             '--download-archive', 'descargados.txt', '-P', carpeta, url],
                                             capture_output=True, text=True)
            if resultado.returncode != 0:
                 print(f'Hubo un error: {resultado.stderr}')
            else:
                descargados+=1 #Te indica la cantidad de links que se han procesado hasta el momento
                print(f"Descargados: {descargados}")

descargar()