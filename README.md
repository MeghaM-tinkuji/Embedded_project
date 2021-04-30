# output


|OFF|OFF|OFF|ON|
|:--:|:--:|
|\image html 00.png||\image html 01.png||\image html 10.png||\image html 11.png||

## Code 
```
	if(((PINB&(1<<PB0))==0)&&((PINB&(1<<PB6))==0))    //IF PIN B0 && PIN B6 IS PRESSED
        {
            PORTC |= (1<<PC0); //TURN ON THE LED
        }
        else
        {
            PORTC &= ~(1<<PC0);  //ELSE TURN OF THE LED
        }
```