ShellShock (Bash Zero Day Vulnerability)
========================================

About This Repository
---------------------

This repository contains useful documents which I have written to help educate the 
cybersecurity community on the "ShellShock" bash vulnerability. These documents are 
designed to help facilitate learning, including on how to identify possibly vulnerable 
services and how to remediate such vulnerabilities.

What is ShellShock?
-------------------

In short, ShellShock is a very serious zero day vulnerability which has been found to 
reside in all versions of bash from 4.3 and earlier. This vulnerability causes bash 
to process extraneous data after a function declaration which can include code which 
will then be executed. ShellShock is a code injection vulnerability.

Getting Started
---------------

The best place to start is with the file `ShellShock Overview.pdf`. This is a brief 
presentation which introduces ShellShock, gives some details on the nature of this bash 
vulnerability, and explains how ShellShock can be used against Apache web servers which 
have CGI scripting enabled.

Contacting the Author
---------------------

If you have any questions, comments, or concerns regarding the contents of this repository, 
please contact me at cmyagema@syr.edu .

License
-------

These documents are free: you can redistribute them and/or modify
them under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

These documents are distributed in the hope that they will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.