//Gcode for 13 inch MBP


//Home

G28 X Y

//Move to power button

//Measure G1 X30 Y40



//Press down

M280 P0 S90

//delay 15 secs to hold the button down    

G4 S15

//Lift up 

M280 P0 S10

//Push Down to start mac

M280 P0 s90

//Hold option

M280 P1 S20

//Delay 5 sec to allow mac to start

G4 S5

//Lift up

M280 P0 S10


//Delay to hold down option some more

G4 S10

//Lift up option key

M280 P1 S100

//Type some random numbers here


//Move to arrow button

//















