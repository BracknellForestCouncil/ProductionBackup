# README.MD

This repository contains a flattened version of the Bracknell Forest Council
Website.

The website originally was built using a variety of tools including NPM,
Yeoman, Grunt and hosted in a number of Docker containers. As this system was
woefully undocumented the decision was made to use a copy of the "built" site
with symlinks replaced by actual files (with the exception of the hash salt).

Geofield map key: AIzaSyAEIrOaR4tSOn99Qi-YU2m1jcRcde2dsUw

There is a file /docroot/sites/all/modules/custom/bracknell/bracknell_base/
includes/bracknell_base.helpers.inc that contains custom helper functions that
can be used throughout the site. See the README.MD inside the folder.

Tech lead: Andy Dempster
UX Lead: Emily Coward.
Microserve 2017.

## Git workflow

The staging and production sites are hosted on platform.sh. Specifically an "Enterprise" platform.sh environment.

Those environments have specific repos:

`git@git.ent.platform.sh:bracknell.git` (production)

`git@git.ent.platform.sh:bracknell_stg.git` (staging)

For all development the usual workflow can be used. If you wish to deploy to staging or production (be careful of course), merge your work to master and then use the following to push it up to the relevant platform.sh environment.

`git push staging master`

`git push production master`

## SSH Access

Production:

`ssh bracknell@bracknell.ent.platform.sh`

Staging:

`ssh bracknell_stg@bracknell.ent.platform.sh`
