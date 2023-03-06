# [Gold IV] Autostrady - 8549 

[문제 링크](https://www.acmicpc.net/problem/10775) 

### 성능 요약

메모리: 52940 KB, 시간: 624 ms

### 분류

그래프 이론, 최소 스패닝 트리

### 문제 설명

<p>Drogi w Dalekim Kraju są w bardzo złym stanie, ale pozwalają na dotarcie z każdego miasta do dowolnego innego (choć może to wymagać odwiedzenia wielu miast). Żeby temu zaradzić rząd Dalekiego Kraju postanowił wybudować autostrady. Z braku pieniedzy zdecydowano się na budowę najmniejszej możliwej liczby autostrad, które umożliwią przejazd pomiędzy dwoma dowolnymi miastami. Autostrady mają być zbudowane w miejsce istniejących (wybranych) dróg. Znany jest koszt przebudowy każdej drogi. Okazało się, że koszty przebudowy różnych dróg są różne. Autostrady mają zbudować prywatne przedsiębiorstwa za pieniądze publiczne. Rząd wie, że opinię społeczną nie tyle interesuje łączny koszt wybudowania wszystkich autostrad, ale to ile zarobią poszczególne przedsiebiorstwa. Dlatego zdecydowano się na wybudowanie takiej sieci autostrad, żeby koszt najdroższej z nich był jak najmniejszy. Jaki jest koszt budowy najdroższej autostrady przy takim założeniu? Wszystkie drogi i autostrady są dwukierunkowe.

Napisz program, który:

wczyta ze standardowego wejścia opis systemu drogowego w Dalekim Kraju i koszty przebudowy poszczególnych dróg na autostrady,
obliczy koszt budowy najdroższej autostrady przy założeniu, że wybuduje się ich jak najmniej, zapewniając jednocześnie przejazd autostradami pomiędzy dowolnymi dwoma miastami oraz że koszt budowy najdroższej z nich będzie jak najmniejszy,
wypisze wynik na standardowe wyjście.</p>

### 입력 

 <p>W pierwszym wierszu podane są dwie liczby całkowite n, m (2 ≤ n ≤ 100 000, 1 ≤ m ≤ 100 000), oddzielone pojedynczym odstępem. Liczba n jest liczbą miast w Dalekim Kraju. Miasta są ponumerowane od 1 do n. Liczba m jest liczbą dróg. Każda droga łączy bezpośrednio dwa miasta. Każdy z następnych m wierszy zawiera trzy liczby całkowite opisujące jedną drogę wraz z kosztem jej przebudowy. Liczby oddzielone są pojedynczymi znakami odstępu. Dwie pierwsze liczby są numerami miast, które ta droga łączy, natomiast trzecia liczba jest kosztem przebudowy drogi na autostradę. Koszt pojedyczej przebudowy jest dodatnią liczbą całkowitą nie większą niż 1 000 000.</p>

### 출력 

 <p>Pierwszy i jedyny wiersz powinien zawierać koszt budowy najdroższej autostrady przy spełnieniu warunków zadania.</p>

