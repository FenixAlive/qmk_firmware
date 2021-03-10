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
mac1  q d r f b
gesc  a s e t g
ctrl z x m c v
    tab/LGUI layer3 enter/shift

# right-hand 
k w y p ; backspace
h n i o u '
j l , . / alt
   space/shift layer2 backspc/altgr

//un toque a Altgr es backspace
//un toque a lgui es tab
//shift al dejar apretado a enter o space
//escape al apretar gui o shift es `

### Personal Layout layer 2 default *(numbers and symbols)

# left-hand 
¡     ! @ # $ %
gesc  ( ) { } &
\     | ^ [ ] _
    __ layer4 __

# right-hand 
/ 7 8 9 * delete
0 4 5 6 - insert
. 1 2 3 + =
  __ ___ __


### Personal Layout layer 3 default *(movements)

# left-hand 
bm5    F1 F2  F3  F4  macc0
___    F5 F6  F7  F8  macc1
___   F9 F10 F11 F12 macc2
      ___ ___ ___

# right-hand 
lmou  domou upmous rmous upmidmo bm4 
left  down  up     right downmid bm3     
impPt RePag Inicio Fin   AvPag   ___
right-click layer4 left-click

up    inicio mup   fin  upmidmo  bm4
left  mleft  mdown mrig downmid  bm3
down  right  impPt Repag AvPag   Alt
right-click layer4 left-click

//velocidad acelerada para mouse
//bm es button mouse

### Personal Layout layer 4 default *(media and functions)

# left-hand 
mute    vol-    vol+   **    **    calc 
BMay  backli- backli+  **    **    exec  

      LGUI ** Enter

# right-hand 
**     querty game    default reset  ctrl+alt+sup
launch play   stop    prev    next   **  
**     play1  macro2  play2   **     **
space ** altgr


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

