# ELEKTRIČNA KLJUČAVNICA
## Navodila
Na voljo imate 9 tipk (številke 1 do 9 na tipkovnici 3x4 "keypad"). S pravilno kombinacijo 4 številk (npr. 6789) odpremo ključavnico (zelena LED). Vsaka napaka vrne krmilje v izhodiščni položaj. Vpis kombinacije je mogoč samo, če je vklopljeno stikalo na pozicijo 1. 

## Kosovnica

| Število kosov |    Komponent   |
| :-----------: |    ----------- |
|       1       | Arduino MEGA 2560    |
|       1       | Tipkovnica 4x4 |
|       1       | LCD            | 
|       1       | Zelena LED     | 
|    1          | Rdeča LED    |
|     1         | Stikalo        |
|    1          | Breadboard     |
|    1          | Upor 1000E     |
|    3          | Upor 220E     |
|    1          | Potenciometer 10k     |


## Priredbeni seznam

**Vhodi**
| Oznaka v načrtu |    Naslov operanda   |    Vrsta kontakta   |    Pomen   |
| :-----------: |    :-----------: |  :-----------:     |    -----------  |
|       SW1      |  stikalo     |       N.O.       | Omogoči uporabo tipkovnice za vpis kombinacij             |
|       Tipkovnica 4x4       |   Keypad    |    N.O.          | Za vpisovanje kombinacij številk             |      


**Izhodi**
| Oznaka v načrtu |    Naslov operanda   |    Aktiven pri   |    Pomen   |
| :-----------: |    :-----------: |  :-----------:     |    -----------  |
|      LCD       |   lcd    |       1      |     Izpiše pritisnjene številke         |
|       Zelena LED      | led     |        1      |    Zasveti če je kombinacija številk pravilna          |    
|      Rdeča LED       |   led2     |        1      |       Zasveti če je kombinacija številk nepravilna       |   



## Shema
![shema](https://user-images.githubusercontent.com/129844284/230314510-bc77b76e-e300-4b95-8ab9-9ebcf1c7b42a.png)


## Slika vezja
![Slika vezja](https://github.com/Snicl/projekt_ELEKTRICNA_KLJUCAVNICA/blob/main/Media/Slika%20vezja.jpg?raw=true)

## Video
[![Watch the video](https://github.com/Snicl/projekt_ELEKTRICNA_KLJUCAVNICA/blob/main/Media/Delovanje%20vezja.MOV)
