Geocoder 
===========

###What It Is
A view controller which allows the user to either long press a map and get back an address, or enter text into a search bar to put a pin on a map. 

That functionality isn't the most useful thing but it's a starting point to tie into other functionality in your app.

There's a xcode project so you can just check it out if you want. 

###Requirements
A Deployment Target >= iOS 5

###How To Use
1 - Link Against Frameworks

* CoreLocation
* MapKit
* AddressBookUI

2 - Copy the Files to Your Project

* MDSGeocodingViewController.m
* MDSGeocodingViewController.h
* MDSGeocodingViewController.xib

3 - Instantiate a View Controller and Do What You With It.

e.g. [MDSGeocodingViewController viewController];

###License
 Permission is hereby granted, free of charge, to any person obtaining a copy 
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights 
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
 copies of the Software, and to permit persons to whom the Software is 
 furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in 
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
  DEALINGS IN THE SOFTWARE.
