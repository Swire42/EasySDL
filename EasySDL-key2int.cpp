#include "EasySDL.hpp"
#include "EasySDL-key2int.hpp"

 void key2int::write_kp0()
 {
  (*keyboardIntDest)*=10;
 }

 void key2int::write_kp1()
 {
  (*keyboardIntDest)*=10;
  (*keyboardIntDest)+=1;
 }

 void key2int::write_kp2()
 {
  (*keyboardIntDest)*=10;
  (*keyboardIntDest)+=2;
 }

 void key2int::write_kp3()
 {
  (*keyboardIntDest)*=10;
  (*keyboardIntDest)+=3;
 }

 void key2int::write_kp4()
 {
  (*keyboardIntDest)*=10;
  (*keyboardIntDest)+=4;
 }

 void key2int::write_kp5()
 {
  (*keyboardIntDest)*=10;
  (*keyboardIntDest)+=5;
 }

 void key2int::write_kp6()
 {
  (*keyboardIntDest)*=10;
  (*keyboardIntDest)+=6;
 }

 void key2int::write_kp7()
 {
  (*keyboardIntDest)*=10;
  (*keyboardIntDest)+=7;
 }

 void key2int::write_kp8()
 {
  (*keyboardIntDest)*=10;
  (*keyboardIntDest)+=8;
 }

 void key2int::write_kp9()
 {
  (*keyboardIntDest)*=10;
  (*keyboardIntDest)+=9;
 }
 
 void key2int::write_backspace()
 {
  (*keyboardIntDest)/=10;
 }
