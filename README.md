# ELEKTRIČNA KLJUČAVNICA

## Navodila
Na voljo imate 9 tipk (številke 1 do 9 na tipkovnici 3x4 "keypad"). S pravilno kombinacijo 4 številk (npr. 6789) odpremo ključavnico (zelena LED). Vsaka napaka vrne krmilje v izhodiščni položaj. Vpis kombinacije je mogoč samo, če je vklopljeno stikalo na pozicijo 1. 

<br />

## Kosovnica
| Število kosov | Komponent         |                                         
|:-------------:|-------------------|   
|       1       | Arduino MEGA 2560 |                    
|       1       | Tipkovnica 4x4    |
|       1       | LCD               | 
|       1       | Zelena LED        | 
|       1       | Rdeča LED         |
|       1       | Stikalo           |
|       1       | Breadboard        |
|       1       | Upor 1000E        |
|       3       | Upor 220E         |
|       1       | Potenciometer 10k |

<br />

## Priredbeni seznam

### Vhodi 
| Oznaka v načrtu | Naslov operanda      | Vrsta kontakta      | Pomen                                          |
|:---------------:|:--------------------:|:-------------------:|------------------------------------------------|
| SW1             | stikalo              | N.O.                | Omogoči uporabo tipkovnice za vpis kombinacij  |      
| Tipkovnica 4x4  | Keypad               | N.O.                | Za vpisovanje kombinacij številk               |      


### Izhodi
| Oznaka v načrtu | Naslov operanda      | Aktiven pri         | Pomen                                          |
|:---------------:|:--------------------:|:-------------------:|------------------------------------------------|
| LCD             | lcd                  | 1                   | Izpiše pritisnjene številke                    |
| Zelena_LED      | led                  | 1                   | Zasveti če je kombinacija številk pravilna     |    
| Rdeča_LED       | led2                 | 1                   | Zasveti če je kombinacija številk nepravilna   |   

<br />

## Shema Arduino
![shema](https://user-images.githubusercontent.com/123487347/232709398-430fc105-b7c7-4829-aa58-025c4c8cd636.png)

<br />

## Slika vezja
![Slika vezja](https://github.com/Snicl/projekt_ELEKTRICNA_KLJUCAVNICA/blob/main/Media/Slika%20vezja.jpg?raw=true)

<br />

## Video

https://user-images.githubusercontent.com/123487347/231368338-6748efc2-758b-4c15-93f4-75a2a985b01e.mp4

<br />

## Komentar
Vezje deluje brezhibno po navodilih. Dodala sva tudi LCD zaslon za prikaz vnešenih vrednosti, s pritiskom na tipko " * " pa lahko uporabnik izbriše svoj vnos ob morebitni napaki. Ko vnesemo pravilno geslo, posveti zelena LED, na zaslonu pa se izpiše sporočilo, da je geslo pravilno ("Success!"). Če je vnešeno geslo napačno, lahko ponovno poskusimo z vnosom po opozorilnem sporočilu ("Poskusi znova!"). Prižge se tudi rdeča LED. Če je število vnosov nepravilno 3x zapored, se tipkovnica zablokira za 10 sekund (čas se izpisuje na zaslonu). Če smo vnesli manj/več kot 4 znake, se nam na zaslonu pojavi sporočilo "geslo ima 4 znake". Tipkovnico lahko vklopimo/izklopimo z drsnim stikalom.

<br />

## Shema EasySoft

![image](https://user-images.githubusercontent.com/129844284/232708958-dd48ac59-bb6f-458a-bf48-8cdda28cbdfd.png)

<br />

## Shema Mitsubishi

![Shema](https://user-images.githubusercontent.com/123487347/232063643-6aaf1888-110d-49e3-8b77-5a0849787465.png)

<br />

## Video s krmilnikom Mitsubishi

https://user-images.githubusercontent.com/123487347/232068001-4dc992c6-4af7-4f74-a159-cd6eb69aa778.mp4



