## Motorspin

Man får desverre ikke styrt så mange persienner med å blinke en lampe. Men koden vi har skrevet kan kanskje det likevel? I denne oppgaven skal vi bytte ut lyset med en motor og få den å spinne. Først med klokken, så mot klokken. 

## Utstyr for denne oppgaven
Du trenger:
 * [En DC Motor](https://www.makerlab-electronics.com/my_uploads/2017/06/DC-motor.jpg) Du trenger ikke nødvendigvis en som ser helt slik ut. 
 * [L298N H-Bridge](http://tinkbox.ph/sites/tinkbox.ph/files/field/product/m37-3.jpg)
 * [male-to-male ledninger](https://cdn.solarbotics.com/products/photos/03e0f1ccebb02b4dc5cc17e395d3049b/45040-IMG_6236wht.jpg?w=800)
 * [female-to-male ledninger](https://storage.googleapis.com/stateless-www-faranux-com/2018/03/81fafaaa-img_jumper_wire.jpg)
## Hvordan koble opp
På L298N: 
* Koble motoren til Motor A
* Koble GND på brettet til G på ESP'en 
* Koble VMS på brettet til 5V på ESP'en

* For å styre Motor A brukes **IN1** og **IN2**
    * IN1 spinner får motoren til å spinne i en retning 
    * IN2 Spinner får moteren til å spinne i den andre motsatt retning 

## Kode
Får å løse denne oppgaven bruker du de samme funksjonene som du brukte i oppgave 1, bare at koden må struktureres på en annen måte. 
