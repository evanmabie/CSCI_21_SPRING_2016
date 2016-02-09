/*
 * Name        : lab_2.cpp
 * Author      : Evan Mabie
 * Description : Using Arithmetic to finish the functions MakeChange() and
 *               LaunchHumanCannonball()
 * Sources     :
 */

// Please note the header above. You need to include the name of the file, the
// author, a description of the program and any sources used
#include "lab_2.h"

int main() {
/* int initial_value, quarters, dimes, nickels, pennies;
cout << "Please enter a value\n";
cin >> initial_value;
MakeChange(initial_value, quarters, dimes, nickels, pennies);
 cout << "Number of quarters \n" << quarters << endl
       << "Number of dimes \n" << dimes << endl
       << "Number of nickels \n" << nickels << endl
       << "number of pennies \n" << pennies << endl; */ 
double launch_angle, initial_velocity;
cout << "Please enter a launch angle\n";
cin >> launch_angle;
cout << "Please enter an initial velocity\n";
cin >> initial_velocity;
cout << "Your horizontal distance is: \n";
cout << LaunchHumanCannonball(initial_velocity, launch_angle);
return 0;
}


/*
 * Given an initial integer value (representing change to be given, such as in a
 * financial transaction), break the value down into the number of quarters,
 * dimes, nickels, and pennies that would be given as change.
 * @param int initial_value - The amount of change to be broken down in pennies.
 * @param int quarters  - The number of quarters that come out of initial_value
 * @param int dimes - The number of dimes that come out of initial_value,
 *                    after quarters have been taken out
 * @param int nickels - The number of nickels that come out of initial_value,
 *                      after quarters and dimes have been taken out
 * @param int pennies - The number of pennies that come out of initial_value,
 *                      after quarters, dimes, and nickels have been taken out
 */
void MakeChange(int initial_value, int &quarters, int &dimes, int &nickels,
                int &pennies) {
  quarters = (initial_value / 25);
  dimes = (initial_value % 25) / 10;
  nickels = ((initial_value % 25) % 10) / 5;
  pennies = (((initial_value % 25) % 10) % 5);
 
}

/*
 * Computes the horizontal distance traveled by a human cannonball given an
 * initial velocity and launch angle. Simplified -- does not account for many
 * factors that affect projectile motion.
 * @param double initial_velocity - Represents the initial velocity of the
 *                                  human cannonball in meters/second
 * @param double launch_angle -  Represents the launch angle of the human
 *                               cannonball in degrees
 * @return double  - Represents the horizontal distance the human cannonball
 *                   will travel
 */
double LaunchHumanCannonball(double initial_velocity, double launch_angle) {
 
  // (1) Convert launch_angle from degrees to radians
  //     [radian_angle = launch_angle * (kPI/180)]
    launch_angle *= (kPI/180);
   // cout << "This is your launch angle: " << launch_angle << endl;

  // (2) Compute final horizontal/x velocity
  //     [x_velocity = initial_velocity * cos(radian_angle)]
    double x_velocity = initial_velocity * cos(launch_angle);
    //cout << "x velocity: " << x_velocity << endl;
  // (3) Compute final vertical/y velocity
  //     [y_velocity = initial_velocity * sin(radian_angle) * -1]
    double y_velocity = initial_velocity * sin(launch_angle) * -1;
   // cout << "y velocity: " << y_velocity << endl;

  // (4) Compute time of flight
  //     [flight_time = (y_velocity) * 2 / -9.8]
   double flight_time = (y_velocity * 2) / -9.8;
   // cout << "flight time: " << flight_time << endl;

  // (5) Compute horizontal/x distance traveled
  //     [x_distance = x_velocity * flight_time]
  double x_distance = x_velocity * flight_time;
   // cout << "x dis before return: " << x_distance << endl;

  // (6) Return horizontal/x distance
  return x_distance;
}
