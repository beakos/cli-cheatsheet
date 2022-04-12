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
