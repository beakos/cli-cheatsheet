# Chmod Commands for Files
1. Give permissions of the memebers to read the file but not write and execute: 
`chmod g=r <filename>`

2. Removes the execute permission for all users: 
`chmod a-x <filename>`

3. Remove write privelage for users in other users:
`chmod -R o-w <dir-name>`

4. Remove read, write and execute permission for all users except file owner:
`chmod og-rwx <filename>`

5. The same thing can be also accomplished by using the following form:
`chmod og= <filename>`

6. Give read, write and execute permsiion to the file's group and no permissions to all other users:
`chmod u=rwx,g=r,o= <filename>`

7. Add the file owner permissions to the permissions that the members of the file's group have:
`chmod g+u <filename>`

8. Add a sticky bit to a given directory:
`chmod o+t <dir-name>`

# cmus Commands
| Command Type   	  | Command Description 										    |
| :---	         	  | :---		       												|
| Up Key and Down Key |navigate up and down 											|
| Left and Right Key  |move song foward or back 										|
| Tab Key			  |Move into right or left section									|
| Keys 1,2,3,4,5,6	  |provide different viewing options								|
| c Key				  |pause and play													|
| Enter Key			  |when selected a song, the song will be selected to queue and play|

# DH Commands (Check Hard Drive Space)
- `df`
- `df -h`
- `df -h /`

# Git Cloning and Installing
- `git clone <web-url>`
- `cd <folder-name>`
- `sudo make install` or `sudo make clean install` or `./install`

# Copy Commands
- Copies and overwrites content from  <file1> and overwrites <file2>
`cp <file1> <file2>` 

# Grub Theme Ajusting Themes and Text in Grub
1. To edit text and directories
`/etc/default/grub`

2. To store themes in this folder
`/boot/grub/themes`
	
3. To rebuild to apply changes of themes	
`grub-mkconfig -o /boot/grub/grub.cfg`

# Keybindings
`xbindkeys_config`

# MKFS (Make File System(Fat32)) Formating
`mkfs -t vfac /dev/<target>`

# Music Players
- Start the program
`ncmpcpp`

# Network Manager Terminal for Wireless and Wired Connection
- Start the program
`nmtui`

# NordVPN
Setting the killswith off or on
`nordvpn set killswitch off`
`nordvpn set killswitch on`

# Patches and Patching for DWM (mainly)
- `patch < (patch-name)`
- `make clean install` or `make install`
- may need to use sudo to make install

# Pacman Installing Offline Files (pacman -U)
- `pacman -U <target>`

# Removing Files using Pacman
- Remove the installed package
`pacman -R <target>`

- Removes the installed package and its dependecies
`pacman -Rcns <target>`

- Shows the unecassary packages on arch
`pacman -Qdtq`

- Removes all the unesassary packages installed on the system
`pacman -R $(pacman -Qdtq)`

- List packages installed with pacman
`pacman -Qqen`
	
- List packages installed with the AUR package manager
`pacman -Qqem`

# Remove Files Commands
Force and Remove Folder and File Recurisively
`rm <filename> -r`

Force and Remove Folder and File Recursivevly
`rm <filename> -f -r`

# Sound Commands
Shows the volume mixer in the terminal to allow ajusting hardware volumes on the system
`alsamixer`

# Systemctl Commands
- `systemctl enable <service>`
- `systemctl start <serivce>`
- `systemctl status <service>`

- `systemctl enable --now <service>`
- `systemctl start --now <serivce>`
- `systemctl status --now <service>`

# Terminal Theme Edit
Change settings in `.Xresources` in the users home folder; i.e. `/home/<username>` on linux.

# Themes
To overide change in application theme and light mode throughout linux DM or WM use;
- `lxapperance` or and `qt5ct`
- *to Download more themes for arch go to the ArchWiki/Packages and search for icon-themes or gtk-themes

# Uncompressing ZIPS
- `unzip <filename>`

# Uncompressing RAR FILES
- `unrar x <filename>`

# Uncompressing TAR or TAR.GZ
- Default tar decompression command `tar zxvf <filename>`
- Uncompress the resulting archive with gzip command `-z:` 
- Extract to disk from the archive `-x:` 
- Produce verbose output i.e. show progress and filenames while extracing files `-v:` 
- Read the archive from the specified file called <filename> `-f:` 

# Whonix
Start gateway before the desktop.
Change password on current user `passwd`

- `sudo apt-get update`
- `sudo apt-get upgrade`
- `sudo apt-get-update-plus dist-upgrade`