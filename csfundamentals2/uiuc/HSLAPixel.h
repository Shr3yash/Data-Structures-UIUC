/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

 #pragma once

 #include <iostream>
 #include <sstream>
 
 namespace uiuc {
 
 class HSLAPixel {
 public:
     double h;  // Hue, between 0 and 360
     double s;  // Saturation, between 0 and 1
     double l;  // Luminance, between 0 and 1
     double a;  // Alpha (opacity), between 0 and 1
 
     // Default constructor
     HSLAPixel();
 
     // Constructor with hue, saturation, luminance (alpha defaults to 1)
     HSLAPixel(double hue, double saturation, double luminance);
 
     // Constructor with all values
     HSLAPixel(double hue, double saturation, double luminance, double alpha);
 };
 
 }
 