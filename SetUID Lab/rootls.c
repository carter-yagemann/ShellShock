/*
 * rootls (rootls.c) - Copyright 2014 Carter Yagemann
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * A full copy of the GNU General Public License is available at
 * <http://www.gnu.org/licenses/>.
 *
 *
 * This program is intended to be used with the SetUID ShellShock Attack
 * Lab. For this reason, this program is intentionally insecure and
 * should never be used for anything other than teaching about the
 * ShellShock bash vulnerability.
 *
 * A copy of the lab documentation can be found at
 * <https://bitbucket.org/carter-yagemann/shellshock/>.
 */

#include <unistd.h>
#include <string.h>

/* This program allows the user to perform an ls as root */
int main ( int argc, char *argv[] ) {

  // Set the UID to the owner's UID. In this case, the owner is root.
  setuid(geteuid());

  // Perform the ls. This is intentionally done in an unsafe manner
  if (argc > 1) {
    size_t size = strlen(argv[1]) + 11;
    char command[size];
    strcpy(command, "/bin/ls -l ");
    strcat(command, argv[1]);
    system(command);
  } else {
    system("/bin/ls -l");
  }

  return 0;
}
