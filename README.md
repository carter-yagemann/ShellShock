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
will then be executed. Categorically, ShellShock is a code injection vulnerability.

Getting Started
---------------

The best place to start is with the file `ShellShock Overview.pdf`. This is a brief 
presentation which introduces ShellShock, gives some details on the nature of this bash 
vulnerability, and briefly explores how ShellShock can be used against Apache web servers 
which have CGI scripting enabled.

Issue Reporting and Contributions
---------------------------------

If you have any issues or concerns regarding the contents of this repository, please 
file an issue via the issue tracker or contact the creator. If you would like to 
contribute to this repository, please fork this repository and submit a pull request.
Upon having your pull request accepted, you will be added to the contributing authors 
section.

Contributing Authors
--------------------

Carter Yagemann (Creator, Admin) - [cmyagema@syr.edu](mailto:cmyagema@syr.edu)

Amit Ahlawat (Contributor) - [aahlawat@syr.edu](mailto:aahlawat@syr.edu)

License
-------

These documents are released as open source documents. Permission is granted to copy, 
distribute and/or modify these documents under the terms of the GNU Free Documentation 
License, Version 1.3 or any later version published by the Free Software Foundation. A copy 
of the license can be found at 
[http://www.gnu.org/licenses/fdl.html](http://www.gnu.org/licenses/fdl.html).