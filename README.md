# bash-linux-commands
Bash and Linux commands

# Chmod Commands for Files
chmod g=r <filename> [Give permissions of the memebers to read the file but not write and execute]
chmod a-x <filename> [Removes the execute permission for all users]
chmod -R o-w <dir-name> [Remove write privelage for users in other users]
chmod og-rwx <filename> [Remove read, write and execute permission for all users except file owner]
chmod og= <filename> [The same thing can be also accomplished by using the following form]
chmod u=rwx,g=r,o= <filename> [Give read, write and execute permsiion to the file's group and no permissions to all other users]
chmod g+u <filename> [Add the file owner permissions to the permissions that the members of the file's group have]
chmod o+t <dir-name> [Add a sticky bit to a given directory]

# cmus Commands
Basic: 
	Up Key and Down Key = navigate up and down
	Left and Right Key = move song foward or back
	Tab Key = Move into right or left section
	Keys 1,2,3,4,5,6 = provide different viewing options
	c Key = pause and play
	Enter Key = when selected a song, the song will be selected to queue and play

# DH Commands (Check Hard Drive Space)
df
df -h
df -h /

# Git Cloning and Installing
	git clone <web-url>
	cd <folder-name>
	sudo make install or sudo make clean install or ./install

# Copy Commands
	cp <file1> <file2> [Copies and overwrites content from  <file1> and overwrites <file2>]

# Grub Theme Ajusting Themes and Text in Grub
	Directory: /etc/default/grub -- to edit text and directories

	/boot/grub/themes -- store themes in this folder
	grub-mkconfig -o /boot/grub/grub.cfg -- rebuild to apply changes of themes

# Keybindings
xbindkeys_config

# MKFS (Make File System(Fat32)) Formating
mkfs -t vfac /dev/<target>

# Music Players
ncmpcpp [Start the Program]

# Network Manager Terminal for Wireless and Wired Connection
nmtui

# NordVPN
	nordvpn set killswitch off #Setting a status
	nordvpn set killswitch on

# Patches and Patching
patch < (patch-name)
sudo make clean install or sudo make install

# Pacman Installing Offline Files (pacman -U)
sudo pacman -U <target>

# Pacman Removing Files
sudo pacman -R <target>  #Removes the package
sudo pacman -Rcns <target> #Removes the package and its dependecies

pacman -Qdtq #Shows unecassary packages on arch
sudo pacman -R $(pacman -Qdtq) #Removes all the unesassary packages

pacman -Qqen # package list
pacman -Qqem # package list AUR

# Remove Files Commands
rm <filename> -r	[Force and Remove Folder and File Recurisively]
rm <filename> -f -r [Force and Remove Folder and File Recursivevly]


# Sound Commands
	alsamixer [Shows the Mixer to adjust Volumes]


# Systemctl Commands
	systemctl enable <service>
	systemctl start <serivce>
	systemctl status <service>

	systemctl enable --now <service>
	systemctl start --now <serivce>
	systemctl status --now <service>

# Themes
	lxapperance
	qt5ct
  *to Download more themes for arch go to the ArchWiki/Packages and search for icon-themes or gtk-themes

# Uncompressing ZIPS
unzip <filename>

# Uncompressing RAR FILES
unrar x <filename>

# Uncompressing TAR or TAR.GZ
  tar zxvf <filename>
  -z: uncompress the resulting archive with gzip command 
  -x: extract to disk from the archive
  -v: Produce verbose output i.e. show progress and filenames while extracing files
  -f: Read the archive from the specified file called <filename>

# Whonix
  Change Password:
    passwd
  
  Updating: 
    sudo apt-get update
    sudo apt-get upgrade
    sudo apt-get-update-plus dist-upgrade
  *start gateway before the desktop.

# DWM Top Bar
  // Status Bar
  dte(){
    dte="$(date +"%A, %B %d - %H:%M")"
    echo -e " $dte"
  }

  upd(){
    upd='checkupdates | wc -l'
    echo -e " $upd updates"
  }

  mem(){
    mem='free | awk '/Mem/ {printf "%d MiB/%d MiB\n", $3 / 1024.0, $2 / 1024.0}''
    echo -e " $mem"
  }

  cpu(){
    mem='free | awk '/Mem/ {printf "%d MiB/%d MiB\n", $3 / 1024.0, $2 / 1024.0 }''
    echo -e " $mem"
  }

  bat(){
    bat=upower -i $(upower -e | grep BAT) | grep --color=never -E "percentage"
    echo -e " $bat"
  }

  while true; do
    xsetroot -name "$(upd) | $(dte) | $(bat)"
    sleep 10s
  done &



