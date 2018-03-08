// Faya-Nugget Sample Code 
// Date: 2015/04/28
// Module Name: Geared Motor
// Module Number: #ngt-mt-grdmtr-1A
// Description: 用Arduino輸出3組不同的訊號,控制減速馬達的轉速以及方向. 
// 英文的Description: Using Arduino, we can tell our motor(s) how fast to turn, and in which direction to turn.
// Wiring: Module Pin ==> Arduino Pin
//                SIG ==> D11
//                DIR ==> D12

// define pins

//left motor pins
int MtSigLeft=11;
int MtDirLeft=12;

//right motor pins
int MtSigRight=6;
int MtDirRight=7;

/*Setting the motor to low causes it to go clockwise.*/
/*Setting the motor to high causes it to go counter-clockwise*/
/*You can change the MtSig(Left/Right) pin(s) to adjust the speed.*/
void setup()
{
  // initialize the digital pin as an output.
  pinMode(MtSigLeft,OUTPUT);
  pinMode(MtDirLeft,OUTPUT);
  pinMode(MtSigRight,OUTPUT);
  pinMode(MtDirRight,OUTPUT);
}

void turnRight(){

    analogWrite(MtSigLeft,140);
    digitalWrite(MtDirLeft,HIGH);

    analogWrite(MtSigRight,140);
    digitalWrite(MtDirRight,HIGH);
}

void turnLeft(){
    
    analogWrite(MtSigLeft,140);
    digitalWrite(MtDirLeft,LOW);

    analogWrite(MtSigRight,140);
    digitalWrite(MtDirRight,LOW);
}

void goForward(){

    analogWrite(MtSigLeft,140);
    digitalWrite(MtDirLeft,HIGH);

    analogWrite(MtSigRight,140);
    digitalWrite(MtDirRight,LOW);
}

void goBackward( ){

    analogWrite(MtSigLeft,140);
    digitalWrite(MtDirLeft,LOW);

    analogWrite(MtSigRight,140);
    digitalWrite(MtDirRight,HIGH);
}

void loop()
{

    //Direct motor control examples
    
    //Slow, clockwise spin.
    //順時針慢速
    analogWrite(MtSigLeft,140);
    digitalWrite(MtDirLeft,HIGH);
    delay(3000);

    //Fast, clockwise spin.  
    //順時針高速
    analogWrite(MtSigLeft,200);
    digitalWrite(MtDirLeft,HIGH);
    delay(3000);

    //Slow, counter-clockwise spin.
    //逆時針慢速
    analogWrite(MtSigLeft,140);
    digitalWrite(MtDirLeft,LOW);
    delay(3000);


    //Function call examples    
    turnRight( );
    delay( 1000 );
    turnLeft( );
    delay( 1000 );
    goForward( );
    delay( 1000 );
    goBackward( );
    delay( 1000 );
}

