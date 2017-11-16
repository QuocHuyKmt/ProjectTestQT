# ProjectTestQT
Quick setup — if you’ve done this kind of thing before
or	
 HTTPS
 SSH

https://github.com/tomy765/ProjectTestQT.git

We recommend every repository include a README, LICENSE, and .gitignore.
…or create a new repository on the command line

echo "# ProjectTestQT" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/tomy765/ProjectTestQT.git
git push -u origin master
…or push an existing repository from the command line

git remote add origin https://github.com/tomy765/ProjectTestQT.git
git push -u origin master
…or import code from another repository
You can initialize this repository with code from a Subversion, Mercurial, or TFS project.

Import code

// skip input user name and password git
Run following command to enable credential caching.

$ git config credential.helper store
$ git push https://github.com/repo.git

Username for 'https://github.com': <USERNAME>
Password for 'https://USERNAME@github.com': <PASSWORD>
Use should also specify caching expire,

git config --global credential.helper 'cache --timeout 7200'
After enabling credential caching, it will be cached for 7200 seconds (2 hour).


