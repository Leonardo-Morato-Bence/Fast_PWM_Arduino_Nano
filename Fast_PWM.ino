/*  Este código tem como objetivo demonstrar como regular o timer 0 para o modo Fast PWM
 * de maneira simples utilizando os devidos registradores para tal.
 */

void setup() {
  DDRD |= (1<<PD6); //Seleciona o pino D6 como saída

  TCCR0A |= (1<<COM0A1)|(1<<WGM01)|(1<<WGM00); //Ajusta o timer para o modo para Fast PWM
  TCCR0B |= (1<<CS00); //Seleciona o clock do timer
  OCR0A = 255; //Duty cycle do PWM (255 = 100% - 0 = 0%)

}

void loop() {
  
}
