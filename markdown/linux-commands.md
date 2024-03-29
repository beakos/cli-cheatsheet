# Cat Command
`cat` lets you view the file in the CLI e.g. `cat file.txt`

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

# Get Process ID
`ps` in terminal will list all active process ID's

e.g. using `ps` can allow a user to kill processes that are unwanted, process ID's can be found using the `ps` command.

For example after finding a PID, you can use `kill 23`. This means to kill the PID number 23. Once the command has been entered the PID will be stopped.

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
	
3. Rebuild GRUB to apply changes of themes or any other changes made to the config
`grub-mkconfig -o /boot/grub/grub.cfg`

# Keybindings
`xbindkeys_config`
	
# Locales Fix in any distro
- `#!/bin/bash`
- `echo "LC_ALL=en_US.UTF-8" | sudo tee -a /etc/environment`
- `echo "en_US.UTF-8 UTF-8" | sudo tee -a /etc/locale.gen`
- `echo "LANG=en_US.UTF-8" | sudo tee -a /etc/locale.conf`

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

# Query All PC Components
- `lspci -nn`
- `lspci -nn | grep "INTEL"` // gets information about INTEL only devices
- Gets all the information on the parts connected to the PC.

# Removing & Query Files using Pacman
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

- Generate a list of installed pacman packages
`pacman -Q`
	
- Generate a list of installed pacman packages and save the list in a text file
`pacman -Q > my_arch_packages.txt`
	
- 
	
# Pacman Update Integirty Keys for Updating and Upgrading Packages
`pacman -S archlinux-keyring`

# Remove Files Commands
`rm` Removes a file (this does not remove folders unless using force option)

`rm *` Removes all files in the diretory

`rm <filename> -r` Remove folder and file recurisively

`rm <filename> -f -r` Force and remove folder and file recursivevly

# Sound Commands
Shows the volume mixer in the terminal to allow ajusting hardware volumes on the system
`alsamixer`

# SSH Commands
- To start the SSH service `systemctl start sshd.service` (you will probably need to use `sudo`
- To login from another machine `ssh <username>@<ip-address>`

# Systemctl Commands
- `systemctl enable <service>`
- `systemctl start <serivce>`
- `systemctl status <service>`

- `systemctl enable --now <service>`
- `systemctl start --now <serivce>`
- `systemctl status --now <service>`

# Tarbell [tar.gz] Extraction
- `./configure` or `./configure --enable-release`
- `make`

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

# Updating Packages on Arch, AUR and Snap
- Upgrade all pacman packages and system full-upgrade `pacman -Syu` or `pacman -Syyu`
- Upgrade all yay packages and system full-upgrade `yay -Syu` or `yay -Syyu`
- Upgrade all snap packages `snap refresh`

# Whonix
Start gateway before the desktop.
Change password on current user `passwd`

- `sudo apt-get update`
- `sudo apt-get upgrade`
- `sudo apt-get-update-plus dist-upgrade`
