 switch (initial){               //react to button press a  initial
      case 3:  
      Serial.println("Initial=3");                                                                                               //obstacle avoidance
        myservo.write(90);  // move eyes forward
   delay(90);
   curDist = readPing();   // read distance
   Serial.println(curDist);
   if (curDist < COLL_DIST) {changePath();}  // if forward is blocked change direction
   moveForward();  // move forward
  delay(500);
  oldstate=initial;
        break;
     case 2:  
     Serial.println("Initial=2");                                                                                                  // object following
       delay(50);                                        //wait 50ms between pings:
distanceOF = readPing();                       //send ping, get distance in cm and store it in 'distance' variable:
Serial.print("distance");                   
Serial.println(distanceOF);                         // print the distance in serial monitor:


    Right_Value = digitalRead(RIGHT);             // read the value from Right IR sensor:
    Left_Value = digitalRead(LEFT);               // read the value from Left IR sensor:
 
Serial.print("RIGHT");                      
Serial.println(Right_Value);                      // print the right IR sensor value in serial monitor:
Serial.print("LEFT");                       
Serial.println(Left_Value);                       //print the left IR sensor value in serial monitor:

if((distanceOF > 1) && (distanceOF < 15)){            //check wheather the ultrasonic sensor's value stays between 1 to 15.
                                                  //If the condition is 'true' then the statement below will execute:
  //Move Forward:
  rightMotor1.setSpeed(200);  //define rightrightMotor1 speed:
  rightMotor1.run(FORWARD);   //rotate rightMotor1 clockwise:
  rightMotor2.setSpeed(200);  //define rightMotor2 speed:
  rightMotor2.run(FORWARD);   //rotate rightMotor2 clockwise:
  leftMotor1.setSpeed(200);  //define leftMotor1 speed:
  leftMotor1.run(FORWARD);   //rotate leftMotor1 clockwise:
  leftMotor2.setSpeed(200);  //define leftMotor2 speed:
  leftMotor2.run(FORWARD);   //rotate leftMotor2 clockwise:
  
}else if((Right_Value==0) && (Left_Value==1)) {   //If the condition is 'true' then the statement below will execute:
  
  //Turn Left                                                
  rightMotor1.setSpeed(200);  //define rightMotor1 speed:
  rightMotor1.run(FORWARD);   //rotate rightMotor1 cloclwise:
  rightMotor2.setSpeed(200);  //define rightMotor2 speed:
  rightMotor2.run(FORWARD);   //rotate rightMotor2 clockwise:
  leftMotor1.setSpeed(250);  //define leftMotor1 speed:
  leftMotor1.run(BACKWARD);  //rotate leftMotor1 anticlockwise:
  leftMotor2.setSpeed(250);  //define leftMotor2 speed:
  leftMotor2.run(BACKWARD);  //rotate leftMotor2 anticlockwise:
  delay(150);
  
}else if((Right_Value==1)&&(Left_Value==0)) {     //If the condition is 'true' then the statement below will execute:
  
  //Turn Right
  rightMotor1.setSpeed(250);  //define rightMotor1 speed:
  rightMotor1.run(BACKWARD);  //rotate rightMotor1 anticlockwise:
  rightMotor2.setSpeed(250);  //define rightMotor2 speed:
  rightMotor2.run(BACKWARD);  //rotate rightMotor2 anticlockwise:
  leftMotor1.setSpeed(200);  //define leftMotor1 speed:
  leftMotor1.run(FORWARD);   //rotate leftMotor1 clockwise:
  leftMotor2.setSpeed(200);  //define leftMotor2 speed:
  leftMotor2.run(FORWARD);   //rotate leftMotor2 clockwise:
  delay(150);
  
}else if(distanceOF > 15) {                          //If the condition is 'true' then the statement below will execute:
  
  //Stop
  rightMotor1.setSpeed(0);    //define rightMotor1 speed:
  rightMotor1.run(RELEASE);   //stop rightMotor1:
  rightMotor2.setSpeed(0);    //define rightMotor2 speed:
  rightMotor2.run(RELEASE);   //stop rightMotor2:
  leftMotor1.setSpeed(0);    //define leftMotor1 speed:
  leftMotor1.run(RELEASE);   //stop leftMotor1:
  leftMotor2.setSpeed(0);    //define leftMotor2 speed:
  leftMotor2.run(RELEASE);   //stop leftMotor2:
}
       oldstate =  initial;
       break;        
    case 1: 
    Serial.println("Initial=1");                                                                                 //bluetooth car
    if(Serial.available()>0)
 {
   direct=Serial.read();
   if(direct=='U')
   moveForwardBlue();
   else if(direct=='D')
   moveBackwardBlue();
   else if(direct=='L')
   moveLeftBlue();
   else if(direct=='R')
   moveRightBlue();
   else if(direct=='S')
   stopBlue();
 }
oldstate=initial;

    break;
            
     }
}
