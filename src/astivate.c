/**
 * ASTIVATE - astivate.c
 *
 * Activation Bypass + Working Services after Semi-Restore.
 * All devices & all iOS versions are supported.
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
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

void home(void) {
    printf("%s     [*] Welcome to ASTIVATE!\n", KCYN);
    printf("%s     [*] Thanks for using ASTIVATE by @3x7R00Tripper.\n", KCYN);
    printf("%s     [*] Published by @iphone_sec(iPhone Sec Team).\n", KYEL);
    printf("%s     [*] Activate your Semi-Restored iDevice.\n\n", KYEL);
    printf("%s", KNRM);
}


void activate(void) {
    system("./tools/sshpass -p alpine scp -o StrictHostKeyChecking=no -P 2222 -r tools/ASTIVATEREPO.deb root@localhost:/ASTIVATEREPO.deb");
           
    system("./tools/sshpass -p alpine ssh -o StrictHostKeyChecking=no -T root@localhost -p 2222 < tools/activate.sh");
}

int main(int argc, char *argv[]) {
    home();
    activate();
    printf("%s     [*] Successfully Done !!!\n", KGRN);
    printf("%s", KNRM);
    return 0;
}