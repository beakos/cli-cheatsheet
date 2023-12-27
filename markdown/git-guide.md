# Git Cloning and Installing
- `git clone <web-url>`
- `cd <folder-name>`
- `sudo make install` or `sudo make clean install` or `./install`

# Git Duplicating Repositories
- `git push --mirror` is the main command used to push code from one repo to another.
- For example `repo1` has code inside and `repo2` is an empty repo. This command will clone everything.
- To transfer `repo1` content into `repo2`, clone `repo1` and `cd` into the folder, and use `git push --mirror <repo2-link>` and should work without error.

# Git Pushing and Commiting
- `git status` checks which files have been modified
- `git add <filename>` adds the file name that has been changed to queue
- `git commit` commits the files that are needed to be pushed
- `git push` pushes the file to designated branch