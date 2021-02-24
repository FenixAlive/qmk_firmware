Handwired corne keyboard template, split with only one micro pro sharing pins, no leds, no trrs, no oled.

### Arduino Pro Micro Pinout
 7 rows
 6 colums
---
 13 digital pins required


| Rows        | 0  | 1  | 2  | 3  | 4  | 5  | 6  |
|-------------|----|----|----|----|----|----|----|
| Arduino pin | 2  | 3  | 4  | 5  | 6  | 7  | 8  |
| QMK pin     | D1 | D0 | D4 | C6 | D7 | E6 | B4 |

| Columns     | 0  | 1  | 2  | 3  | 4  | 5  |
|-------------|----|----|----|----|----|----|
| Arduino pin | 9  | 10 | 16 | 14 | 15 | A0 |
| QMK pin     | B5 | B6 | B2 | B3 | B1 | F7 |

free pins:
| Arduino pin | A1 | A2 | A3 | TX0 | RXI |
|-------------|----|----|----|-----|-----|
| QMK pin     | F6 | F5 | F4 | D3  | D2  |


### keyboard 

left-hand row-column
|-----|-----|-----|-----|-----|-----|
| 0-0 | 0-1 | 0-2 | 0-3 | 0-4 | 0-5 |
|-----|-----|-----|-----|-----|-----|
| 1-0 | 1-1 | 1-2 | 1-3 | 1-4 | 1-5 |
|-----|-----|-----|-----|-----|-----|
| 2-0 | 2-1 | 2-2 | 2-3 | 2-4 | 2-5 |
|-----|-----|-----|-----|-----|-----|
                  | 3-3 | 3-4 | 3-5 |
                  |-----|-----|-----|

right-hand row-column
|-----|-----|-----|-----|-----|-----|
| 4-0 | 4-1 | 4-2 | 4-3 | 4-4 | 4-5 |
|-----|-----|-----|-----|-----|-----|
| 5-0 | 5-1 | 5-2 | 5-3 | 5-4 | 5-5 |
|-----|-----|-----|-----|-----|-----|
| 6-0 | 6-1 | 6-2 | 6-3 | 6-4 | 6-5 |
|-----|-----|-----|-----|-----|-----|
| 3-0 | 3-1 | 3-2 |
|-----|-----|-----|

### Personal Layout layer 1 default

# left-hand 
esc  q d r f b
tab  a s e t g
ctrl z x m c v
    tab/LGUI layer3 space/shift

# right-hand 
k w y p ; backspace
h n i o u '
j l , . / alt
  enter/shift layer2 backspc/altgr

//doble tap a ctrl se hace ctrl+alt
//un toque a Altgr es backspace
//un toque a lgui es tab
//shift al dejar apretado enter o space

### Personal Layout layer 2 default *(numbers and symbols)

# left-hand 
`  ! @ # $ %
^  ( ) { } &
|  _ = [ ] \
    ¡ layer4 ~

# right-hand 
/ 7 8 9 * insert
. 4 5 6 - sup
0 1 2 3 + impPt
  space layer2 altgr

// ! es Ctrl al dejar apretado
// ~ es Shift al dejar apretado
//doble tap a sup es ctrl+alt+sup

### Personal Layout layer 3 default *(movements)

# left-hand 
**    F1 F2  F3  F4  bm3
BMay  F5 F6  F7  F8  bm4
**    F9 F10 F11 F12 bm5
      LGUI layer3 Enter

# right-hand 
lmou domou upmous rmous upmidmo **            //mouse movement
left down  up     right downmid clicmid     //arrows movement
Ctrl RePag Inicio Fin   AvPag   Alt
right-click layer4 left-click

//velocidad acelerada para mouse
//bm es button mouse
//doble tap a F4 es Alt+F4
//doble tap a ctrl se hace ctrl+alt

### Personal Layout layer 4 default *(media and functions)

# left-hand 
**    mute    vol-    vol+  mutemic ** 
BMay  backli- backli+ proy  avion   **  
**    play    stop    prev  next    **  //music
      LGUI ** Enter

# right-hand 
**  querty game default reset **
**  **     **   **      **    **
**  **     **   **      **    **
space ** altgr
//teclado qwerty en capa 1
//teclado juego sin ajustes qmk al doble tap y demas



### Editor para qmk builder
["Esc","Q","D","R","F","B"],
["Tab","A","S","E","T","G"],
["Ctrl","Z","X","M","C","V"],
["LGUI","Layer3","Enter","Space","Layer2","AltGr"],
["K","W","Y","P",";","Back<br>Space"],
["H","N","I","O","U","'"],
["J","L","<\n,",">\n.","?\n/","Alt"]

### Compiling the Firmware

    qmk compile -kb handwired/fenixmini -km default
