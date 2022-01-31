#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
double a,f,g,k,l,m,t,v,w,x,A,F,T,R,f1,f2,m1,m2,T1,T2,nor,num;
void hamonic();
void spring();
void pendulum();
void haa1();
void haa2();
void haa3();
void haa4();
void haf1();
void haf2();
void haf3();
void hat();
void hav1();
void hav2();
void hav3();
void haw1();
void haw2();
void haw3();
void haw4();
void haw5();
void haw6();
void haw7();
void hax1();
void hax2();
void hax3();
void haA1();
void haA2();
void haR1();
void haR2();
void haR3();
void haR4();
void haR5();
void haT1();
void haT2();

void spf();
void spf21();
void spf22();
void spk1();
void spk2();
void spk3();
void spk4();
void spk5();
void spm1();
void spm2();
void spm3();
void spm4();
void spm51();
void spm52();
void spm61();
void spm62();
void spw();
void spx1();
void spx2();
void spF();
void spT1();
void spT21();
void spT22();

void penw();
void penf();
void penl1();
void penl2();
void penl3();
void penT();


int main(){
    int x;
    cout << "find Homonic              press 1"<< endl;
    cout << "find Spring               press 2"<< endl;
    cout << "find Pendulum             press 3"<< endl;
    cout << "Please select number ";
    cin >> x;
    if(x == 1){
        hamonic();
        cout << "-------------------------" << endl;
    }else if( x == 2){
        spring();
        cout << "-------------------------" << endl;
    }else if ( x == 3){
        pendulum();
        cout << "-------------------------" << endl;
    }
    
    //cout << "find a max (acceleration)     press 1"<< endl;
    //cout << "find f (frequency)            press 2"<< endl;
    //cout << "find t (time)                 press 3"<< endl;
    //cout << "find v (speed)                press 4"<< endl;
    //cout << "find w (angular velocity)     press 5"<< endl;
    //cout << "find A (amplitude)            press 6"<< endl;
    //cout << "find T (period)               press 7"<< endl;
    //cout << "find k (spring constant)  press 3"<< endl;
    //cout << "find l (rope length)      press 4"<< endl;
    //cout << "find m (mass)             press 5"<< endl;  
    //cout << "find x (displacement)     press 9"<< endl;
    //cout << "find F (force)            press 11"<< endl;
    //cout << "Please select number ";
   // cin >> y;
}

//รู้ มากกว่า 2 ตัวแปร
void hamonic(){
    cout << "-------------------------" << endl;
    cout << "find a max (acceleration)     press 1"<< endl;
    cout << "find f (frequency)            press 2"<< endl;
    cout << "find t (time)                 press 3"<< endl;
    cout << "find v (speed)                press 4"<< endl;
    cout << "find w (angular velocity)     press 5"<< endl;
    cout << "find x (displacement)         press 6"<< endl; 
    cout << "find A (amplitude)            press 7"<< endl;
    cout << "find R                        press 8"<< endl;
    cout << "find T (period)               press 9"<< endl;
    cout << "Please select number ";
    cin >> num;
    if(num == 1){
        cout << "-------------------------" << endl;
        cout << "a max = w^2*A        press 1" << endl;
        cout << "a(t) = w^2Rcos(wt)   press 2" << endl;
        cout << "a max = w^2*R        press 3" << endl;
        cout << "a(x) = W^2*x         press 4"<< endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            haa1();
        }else if(num == 2){
            haa2();
        }else if(num == 3){
            haa3();
        }else if(num == 4){
            haa4();
        }
    }else if(num == 2){
        cout << "-------------------------" << endl;
        cout << "T = 1/f                       press 1" << endl;
        cout << "w = 2(PI)f                    press 2" << endl;
        cout << "f = number of rounds / t       press 3" << endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            haf1();
        }else if(num == 2){
            haf2();
        }else if(num == 3){
            haf3();
        }
    }else if(num == 3){
        hat();
    }else if(num == 4){
        cout << "-------------------------" << endl;
        cout << "v max = WA                     press 1" << endl;
        cout << "Vx = w*sqrt(R^2 - x^2)         press 2" << endl;
        cout << "Vt = wRsin(wt)                 press 3" << endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            hav1();
        }else if(num == 2){
            hav2();
        }else if(num == 3){
            hav3();
        }        
    }else if(num == 5){
        cout << "-------------------------" << endl;
        cout << "Vmax = WA                 press 1" << endl;
        cout << "a max = w^2*A             press 2" << endl;
        cout << "Vx = w*sqrt(R^2 - x^2)    press 3" << endl;
        cout << "a(x) = W^2*x              press 4"<< endl;
        cout << "a max = w^2*R             press 5"<< endl;
        cout << "w = 2(PI)f                press 6"<< endl;
        cout << "w = 2(PI)/T               press 7"<< endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            haw1();
        }else if(num == 2){
            haw2();
        }else if(num == 3){
            haw3();
        }else if(num == 4){
            haw4();
        }else if(num == 5){
            haw5();
        }else if(num == 6){
            haw6();
        }else if(num == 7){
            haw7();
        }       
    }else if(num == 6){
        cout << "-------------------------" << endl;
        cout << "Vx = w*sqrt(R^2 - x^2)         press 1" << endl;
        cout << "x = Rcos(wt)                   press 2" << endl;
        cout << "a(x) = W^2*x                   press 3" << endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            hax1();
        }else if(num == 2){
            hax2();
        }else if(num == 3){
            hax3();
        }
    }else if(num == 7){
        cout << "-------------------------" << endl;
        cout << "Vmax = WA         press 1" << endl;
        cout << "a max = w^2*A     press 2" << endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            haA1();
        }else haA2();
    }else if(num == 8){
        cout << "-------------------------" << endl;
        cout << "Vx = w*sqrt(R^2 - x^2)    press 1" << endl;
        cout << "a max = w^2*A             press 2" << endl;
        cout << "x = Rcos(wt)              press 3" << endl;
        cout << "Vt = wRsin(wt)            press 4"<< endl;
        cout << "at = w^2Rcos(wt)          press 5"<< endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            haR1();
        }else if(num == 2){
            haR2();
        }else if(num == 3){
            haR3();
        }else if(num == 4){
            haR4();
        }else if(num == 5){
            haR5();
        }       
    }else if(num == 9){
        cout << "-------------------------" << endl;
        cout << "T = 1/f         press 1" << endl;
        cout << "w = 2(PI)/T     press 2" << endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            haT1();
        }else haT2();
    }
}
void spring(){
    cout << "-------------------------" << endl;
    cout << "find f (frequency)           press 1"<< endl;
    cout << "find k (spring constant)     press 2"<< endl;
    cout << "find m (mass)                press 3"<< endl;
    cout << "find w (angular velocity)    press 4"<< endl;
    cout << "find x (displacement)        press 5"<< endl;
    cout << "find T (period)              press 6"<< endl;
    cout << "find F (force)               press 7"<< endl;
    cout << "-------------------------" << endl;
    cout << "Please select number ";
    cin >> num;
    if(num == 1){
        cout << "f = 1/2(PI) * sqrt(k/m)   " << endl;
        spf();
    }else if(num == 2){
        cout << "-------------------------" << endl;
        cout << "F = kx                     press 1" << endl;
        cout << "mg = kx                    press 2" << endl;
        cout << "w = sqrt(k/m)              press 3" << endl;
        cout << "T = 2(PI) * sqrt(k/m)      press 4"<< endl;
        cout << "f = 1/2(PI) * sqrt(k,m)    press 5" << endl;
        cin >> num;
        if(num == 1){
            spk1();
        }else if(num == 2){
            spk2();
        }else if(num == 3){
            spk3();
        }else if(num == 4){
            spk4();
        }
    }else if(num == 3){
        cout << "-------------------------" << endl;
        cout << "mg = kx                      press 1" << endl;
        cout << "w = sqrt(k,m)                press 2" << endl;
        cout << "T = 2(PI) * sqrt(k,m)        press 3" << endl;
        cout << "f = 1/2(PI) * sqrt(k,m)      press 4"<< endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            spm1();
        }else if(num == 2){
            spm2();
        }else if(num == 3){
            spm3();
        }else if(num == 4){
            spm4();
        }
    }else if(num == 4){
        spw();
    }else if(num == 5){
        cout << "-------------------------" << endl;
        cout << "F = kx            press 1" << endl;
        cout << "mg = kx           press 2" << endl;
        cout << "Please select number ";
        cin >> num;        
        if(num == 1){
            spx1();
        }else{
            spx2();
        }
    }else if(num == 6){
        spT1();
    }else if(num == 7){
        spF();
    }   
}





void pendulum(){
    cout << "-------------------------" << endl;
    cout << "find f (frequency)            press 1"<< endl;
    cout << "find l (rope length)          press 2"<< endl;
    cout << "find w (angular velocity)     press 3"<< endl;
    cout << "find T (period)               press 4"<< endl;
    cout << "-------------------------" << endl;
    cout << "Please select number ";
    cin >> num;
    if(num == 1){
        penf();
    }
    if(num == 2){
        cout << "-------------------------" << endl;
        cout << "w = sqrt(g/l)            press 1" << endl;
        cout << "f = 1/2(PI) * sqrt(g/l)  press 2" << endl;
        cout << "T = 2(PI) * sqrt(l/g)    press 3" << endl;
        cout << "Please select number ";
        cin >> num;
        if(num == 1){
            penl1();
        }else if (num == 2){
            penl2();
        }else if (num == 3){
            penl3();
        }
    }
    if(num == 3){
        penw();
    }
    if(num == 4){
        penT();
    }
}







void haa1(){
    cout << "-------------------------" << endl;
    cout << "a max = w^2*A" << endl;
    cout << "w = "; cin >> w;
    cout << "A = "; cin >> A;
    cout << "a max = " << pow(w,2)*A << " m/s^2" << endl;
}
void haa2(){
    cout << "-------------------------" << endl;
    cout << "at = w^2Rcos(wt)" << endl;
    cout << "w = "; cin >> w;
    cout << "R = "; cin >> R;
    cout << "t = "; cin >> t;
    cout << "at = " << pow(w,2) * R * cos(w*t) << " m/s^2" << endl; 
}
void haa3(){
    cout << "-------------------------" << endl;
    cout << "a max = w^2*R" << endl;
    cout << "w = "; cin >> w;
    cout << "A = "; cin >> A;
    cout << "a max = " << pow(w,2)*R << " m/s^2" << endl;
}
void haa4(){
    cout << "-------------------------" << endl;
    cout << "a(x) = W^2*x "<< endl;
    cout << "w = "; cin >> w;
    cout << "x = "; cin >> x;
    cout << "a(x) = " << pow(w,2)*x << " m/s^2" << endl;

}
void haf1(){
    cout << "-------------------------" << endl;
    cout << "T = 1/f"<< endl;
    cout << "T = "; cin >> T;
    cout << "f = " << 1/T << " Hz" << endl;
}
void haf2(){
    cout << "-------------------------" << endl;
    cout << "w = 2(PI)f" << endl;
    cout << "w = "; cin >> w;
    cout << "f = " << w/2*(M_PI) << " Hz" << endl;
}
void haf3(){
    cout << "-------------------------" << endl;
    cout << "f = number of rounds / t" << endl;
    cout << "number of rounds = "; cin >> nor;
    cout << "t = "; cin >> t;
    cout << "f = " << nor/t << " Hz" << endl;
}
void hat(){
    cout << "-------------------------" << endl;
    cout << "f = number of rounds / t" << endl;
    cout << "number of rounds = "; cin >> nor;
    cout << "f = "; cin >> t;
    cout << "t = " << nor/f << " Hz" << endl;
}
void hav1(){
    cout << "-------------------------" << endl;
    cout << "v max = WA" << endl;
    cout << "W = "; cin >> w;
    cout << "A = "; cin >> A;
    cout << "v max = " << w*A << " m/s" << endl;
}
void hav2(){
    cout << "-------------------------" << endl;
    cout << "Vx = w*sqrt(R^2 - x^2)" << endl;
    cout << "w = "; cin >> w;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "Vx = " << w*sqrt(pow(R,2)-pow(x,2)) << " m/s" << endl;
}
void hav3(){
    cout << "-------------------------" << endl;
    cout << "Vt = wRsin(wt)" << endl;
    cout << "w = "; cin >> w;
    cout << "R = "; cin >> R;
    cout << "t = "; cin >> t;
    cout << "Vt = " << w*R*sin(w*t) << " m/s" << endl;
}
void haw1(){
    cout << "-------------------------" << endl;
    cout << "Vmax = WA"<< endl;
    cout << "Vmax = "; cin >> v;
    cout << "A = "; cin >> A;
    cout << "W = " << v/A << " rad/s" << endl;
}
void haw2(){
    cout << "-------------------------" << endl;
    cout << "a max = w^2*A" << endl;
    cout << "a max = "; cin >> a;
    cout << "A = "; cin >> A;
    cout << "w = " << sqrt(a/A) << " rad/s" << endl;
}
void haw3(){
    cout << "-------------------------" << endl;
    cout << "Vx = w*sqrt(R^2 - x^2)" << endl;
    cout << "Vx = "; cin >> v;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "w = " << v/sqrt(pow(R,2)-pow(x,2)) << " rad/s" << endl;
}
void haw4(){
    cout << "-------------------------" << endl;
    cout << "a(x) = W^2*x"<< endl;
    cout << "a(x) = "; cin >> a;
    cout << "x = "; cin >> x;
    cout << "w = " << sqrt(a/x) << " rad/s" << endl;
}
void haw5(){
    cout << "-------------------------" << endl;
    cout << "a max = w^2*R" << endl;
    cout << "a max = "; cin >> a;
    cout << "R = "; cin >> R;
    cout << "w = " << sqrt(a/R)<< " rad/s" << endl;
}
void haw6(){
    cout << "-------------------------" << endl;
    cout << "w = 2(PI)f"<< endl;
    cout << "f = "; cin >> f;
    cout << "w = " << 2*(M_PI)*f << " rad/s" << endl;
}
void haw7(){
    cout << "-------------------------" << endl;
    cout << "w = 2(PI)/T"<< endl;
    cout << "T = "; cin >> T;
    cout << "w = " << 2*(M_PI)/T << " rad/s" << endl;
}
void hax1(){
    cout << "-------------------------" << endl;
    cout << "Vx = w*sqrt(R^2 - x^2)" << endl;
    cout << "Vx = "; cin >> v;
    cout << "R = "; cin >> R;
    cout << "w = "; cin >> w;
    cout << "x = " << sqrt((pow(R,2)*pow(w,2))/pow(v,2)) << " m" << endl;
}
void hax2(){
    cout << "-------------------------" << endl;
    cout << "x = Rcos(wt)" << endl;
    cout << "R = "; cin >> R;
    cout << "w = "; cin >> w;
    cout << "t = "; cin >> t; 
    cout << "x = " << R*cos(w*t) << " m" << endl;
}
void hax3(){
    cout << "-------------------------" << endl;
    cout << "a(x) = W^2*x"<< endl;
    cout << "a(x) = "; cin >> a;
    cout << "w = "; cin >> w;
    cout << "x =" << a/pow(w,2) << " m" << endl;
}
void haA1(){
    cout << "-------------------------" << endl;
    cout << "Vmax = WA"<< endl;
    cout << "Vmax = "; cin >> v;
    cout << "a = "; cin >> a;
    cout << "A = " << v/w << " m" << endl;
}
void haA2(){
    cout << "-------------------------" << endl;
    cout << "a max = w^2*A" << endl;
    cout << "a max = "; cin >> a;
    cout << "w = "; cin >> w;
    cout << "A = " << a/w << " m" << endl;
}
void haR1(){
    cout << "-------------------------" << endl;
    cout << "Vx = w*sqrt(R^2 - x^2)" << endl;
    cout << "Vx = "; cin >> v;
    cout << "x = "; cin >> x;
    cout << "w = "; cin >> w;
    cout << "R = " << sqrt((pow(v,2)/pow(w,2))+pow(x,2)) << " rad/s" << endl;
}
void haR2(){
    cout << "-------------------------" << endl;
    cout << "a max = w^2*A" << endl;
    cout << "a max = "; cin >> a;
    cout << "w = "; cin >> w;
    cout << "R = " << a/pow(w,2) << " rad/s" << endl;
}
void haR3(){
    cout << "-------------------------" << endl;
    cout << "x = Rcos(wt)" << endl;
    cout << "x = "; cin >> x;
    cout << "w = "; cin >> w;
    cout << "t = "; cin >> t;
    cout << "R = " << x/cos(w*t) << " rad/s" << endl;
}
void haR4(){
    cout << "-------------------------" << endl;
    cout << "Vt = wRsin(wt)" << endl;
    cout << "v(t) = "; cin >> v;
    cout << "w = "; cin >> w;
    cout << "t = "; cin >> t;
    cout << "R = " << v/(w*sin(w*t)) << " rad/s" << endl;
}
void haR5(){
    cout << "-------------------------" << endl;
    cout << "at = w^2Rcos(wt)" << endl;
    cout << "a(t) = "; cin >> a;
    cout << "w = "; cin >> w;
    cout << "t = "; cin >> t;
    cout << "R = " << a/(pow(w,2)*cos(w*t)) << " rad/s" << endl;
}
void haT1(){
    cout << "-------------------------" << endl;
    cout << "T = 1/f" << endl;
    cout << "f = "; cin >> f;
    cout << "T = " << 1/f << " s" << endl;
}
void haT2(){
    cout << "-------------------------" << endl;
    cout << "w = 2(PI)/T" << endl;
    cout << "w = "; cin >> w;
    cout << "T = " << 2*(M_PI)/w << " s" << endl;
}







void spf(){
    cout << "-------------------------" << endl;
    cout << "f = 1/2(PI) * sqrt(k/m)" << endl;
    cout << "m = "; cin >> m;
    cout << "k = "; cin >> k;
    cout << "f = " << 1/2*(M_PI)*sqrt(k/m) << " s" << endl;
}

//findf2ตัวแปร หาf1
void spf21(){
    cout << "-------------------------" << endl; 
    cout << "f2/f1 = sqrt(m1/m2)" << endl;
    cout << "f2 = "; cin >> f2;
    cout << "m1 = "; cin >> m1;
    cout << "m2 = "; cin >> m2;
    cout << "f1 = " << f2/sqrt(m1/m2) << " s" << endl;
}

//findf2ตัวแปร หาf2
void spf22(){
    cout << "-------------------------" << endl; 
    cout << "f2/f1 = sqrt(m1/m2)" << endl;
    cout << "f1 = "; cin >> f2;
    cout << "m1 = "; cin >> m1;
    cout << "m2 = "; cin >> m2;
    cout << "f2 = " << f1*sqrt(m1/m2) << " s" << endl;
}

void spk1(){
    cout << "-------------------------" << endl;
    cout << "F = k*x" << endl;
    cout << "F = "; cin >> F;
    cout << "x = "; cin >> x;
    cout << "k  = " << F/x << " N/m"<< endl;
}
void spk2(){
    cout << "-------------------------" << endl;
    cout << "mg = kx" << endl;
    cout << "m = "; cin >> m;
    cout << "x = "; cin >> x;
    cout << "k = "<< m*g/x << " N/m"<< endl;
}
void spk3(){
    cout << "-------------------------" << endl;
    cout << "w = sqrt(k/m)" << endl;
    cout << "m = "; cin >> m;
    cout << "w = "; cin >> w;
    cout << "k = "<< m*pow(w,2) << " N/m"<< endl;
}
void spk4(){
    cout << "-------------------------" << endl;
    cout << "T = 2(PI) * sqrt(k,m)" << endl;
    cout << "m = "; cin >> m;
    cout << "T = "; cin >> T;
    cout << "k = "<< m*pow(T,2)/pow(2*(M_PI),2) << " N/m"<< endl;
}
void spk5(){
    cout << "-------------------------" << endl;
    cout << "f = 1/2(PI) * sqrt(k,m)" << endl;
    cout << "m = "; cin >> m;
    cout << "f = "; cin >> f;
    cout << "k = "<< m*pow(2*(M_PI)*f,2) << " N/m"<< endl;
}
void spm1(){
    cout << "-------------------------" << endl;
    cout << "mg = kx" << endl;
    cout << "k = "; cin >> k;
    cout << "x = "; cin >> x;
    cout << "m = " << k*x/g << " kg"<< endl;
}
void spm2(){
    cout << "-------------------------" << endl;
    cout << "w = sqrt(k,m)" << endl;
    cout << "k = "; cin >> k;
    cout << "w = "; cin >> w;
    cout << "m = "<< k/pow(w,2) << " kg"<< endl;
}
void spm3(){
    cout << "-------------------------" << endl;
    cout << "T = 2(PI) * sqrt(k,m)" << endl;
    cout << "k = "; cin >> k;
    cout << "T = "; cin >> T;
    cout << "m = "<< 2*(M_PI)*k/pow(T,2) << " kg"<< endl;
}
void spm4(){
    cout << "-------------------------" << endl;
    cout << "f = 1/2(PI) * sqrt(k,m)" << endl;
    cout << "k = "; cin >> k;
    cout << "f = "; cin >> f;
    cout << "m = "<< k/pow(2*(M_PI)*f,2) << " kg"<< endl;
}
//findm1 เทียบ2ตัวแปร
void spm51(){
    cout << "-------------------------" << endl;
    cout << "T2/T1 = sqrt(m2/m1)" << endl;
    cout << "T1 = "; cin >> T1;
    cout << "T2 = "; cin >> T2;
    cout << "m2 = "; cin >> m2;
    cout << "m1 = "<< m2*pow(T1,2) / pow(T2,2) << " kg"<< endl;
}
//findm2 เทียบ2ตัวแปร
void spm52(){
    cout << "-------------------------" << endl;
    cout << "T2/T1 = sqrt(m2/m1)" << endl;
    cout << "T1 = "; cin >> T1;
    cout << "T2 = "; cin >> T2;
    cout << "m1 = "; cin >> m2;
    cout << "m2 = "<< m1*pow((T2/T1),2) << " kg"<< endl;
}
//findm1 เทียบ2ตัวแปร
void spm61(){
    cout << "-------------------------" << endl;
    cout << "f2/f1 = sqrt(m1/m2)" << endl;
    cout << "f1 = "; cin >> T1;
    cout << "f2 = "; cin >> T2;
    cout << "m2 = "; cin >> m2;
    cout << "m1 = "<< m2*pow((f2/f1),2) << " kg"<< endl;
}
//findm2 เทียบ2ตัวแปร
void spm62(){
    cout << "-------------------------" << endl;
    cout << "f2/f1 = sqrt(m1/m2)" << endl;
    cout << "f1 = "; cin >> f1;
    cout << "f2 = "; cin >> f2;
    cout << "m1 = "; cin >> m1;
    cout << "m2 = "<< m1*pow(f1,2) / pow(f2,2) << " kg"<< endl;
}
void spw(){
    cout << "-------------------------" << endl;
    cout << "w = sqrt(k/m)"<< endl;
    cout << "k = "; cin >> l;
    cout << "m = "; cin >> g;
    cout << "w = " << sqrt(k/m) << " rad/s"<< endl;
}
void spx1(){
    cout << "-------------------------" << endl;
    cout << "F = kx"<< endl;
    cout << "F = "; cin >> F;
    cout << "k = "; cin >> k;
    cout << "x = " << F/k << " rad/s"<< endl;
}
void spx2(){
    cout << "-------------------------" << endl;
    cout << "mg = kx" << endl;
    cout << "m = "; cin >> m;
    cout << "k = "; cin >> k;
    cout << "x = " << m*g/k << " rad/s"<< endl;
}
void spF(){
    cout << "-------------------------" << endl;
    cout << "F = kx" << endl;
    cout << "k = "; cin >> k;
    cout << "x = "; cin >> x;
    cout << "F = " << k*x << " rad/s"<< endl;
}
void spT1(){
    cout << "-------------------------" << endl;
    cout << "T = 2(PI) * sqrt(k/m)" << endl;
    cout << "k = "; cin >> k;
    cout << "m = "; cin >> m;
    cout << "T = " << 2*(M_PI)*sqrt(k/m);
}
//T1
void spT21(){
    cout << "-------------------------" << endl;
    cout << "T2/T1 = sqrt(m2/m1)" << endl;
    cout << "T2 = "; cin >> T2;
    cout << "m1 = "; cin >> m1;
    cout << "m2 = "; cin >> m2;
    cout << "T1 = " << T2/sqrt(m2/m1) << " s" << endl;
}
//T2
void spT22(){
    cout << "-------------------------" << endl;
    cout << "T2/T1 = sqrt(m2/m1)" << endl;
    cout << "T1 = "; cin >> T1;
    cout << "m1 = "; cin >> m1;
    cout << "m2 = "; cin >> m2;
    cout << "T2 = " << T1*sqrt(m2/m1) << " s" << endl;
}








void penw(){
    cout << "-------------------------" << endl;
    cout << "w = sqrt(g/l)"<< endl;
    cout << "l = "; cin >> l;
    cout << "g = "; cin >> g;
    cout << "w = " << sqrt(g/l) << " rad/s"<< endl;
}
void penf(){
    cout << "-------------------------" << endl;
    cout << "1/f = 2(PI) * sqrt(g/l)"<< endl;
    cout << "l = "; cin >> l;
    cout << "g = "; cin >> g;
    cout << "f = " << 1/2*(M_PI)*sqrt(g/l) << " Hz";
}
void penl1(){
    cout << "-------------------------" << endl;
    cout << "w = sqrt(g/l)" << endl;
    cout << "w = "; cin >> w;
    cout << "g = "; cin >> g;
    cout << "l = " << g/pow(w,2) << " m"<< endl;
}

void penl2(){
    cout << "-------------------------" << endl;
    cout << "f = 1/2(PI) * sqrt(g/l)" << endl;
    cout << "f = "; cin >> f;
    cout << "g = "; cin >> g;
    cout << "l = " << g/(pow(2*(M_PI),2)*pow(f,2)) << " m"<< endl;
}
void penl3(){
    cout << "-------------------------" << endl;
    cout << "T = 2(PI) * sqrt(l/g)" << endl;
    cout << "T = "; cin >> T;
    cout << "g = "; cin >> g;
    cout << "l = " << g*pow(T,2)/pow(2*(M_PI),2) << " m"<< endl;
}
void penT(){
    cout << "-------------------------" << endl;
    cout << "T = 2(PI) * sqrt(l/g)" << endl;
    cout << "l = "; cin >> l;
    cout << "g = "; cin >> g;
    cout << "T = " << 2*(M_PI)*sqrt(l/g) << " s"<< endl;
}