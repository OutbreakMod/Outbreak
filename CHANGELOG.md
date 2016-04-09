**Apr 8, 2016**
- Server FPS improvements from hive/loading saving
- Fixed can't find "sfx" sounds
- remoteExec used instead for object_speak class
- Relogging no longer triggers zombie spawning instantly, the timer is persistent across relogging
- All zombie creation is now passed through "zombie_create"
- Zombies spawned by player are cleaned up when player is disconnected, instead of logging in

**Apr 7, 2016**
- Zombie stuck detection
- Server clean up of objects based on timer
- Added clean up of bodies (zombies and human)
- Crafting UI now shows (current amount/needed amount)

**Apr 4, 2016**
- Increased the amount of items to use in crafting
- Added multi-lined texted for items with longer names in UI
- Moved recipes away from CfgMagazines
- Fixed GUI height
- GUI now shows green/red if you have (or don't have) enough items
- Searching ground for logs

**Apr 3, 2016**
- Crafting GUI by pressing U is now added
- Reading from configuration with different types of recipes is added.
- Removed deprecated ArmA 2 (getNumber, getArray, getText) calls and replaced with BIS_fnc_getCfgData

**Apr 2, 2016**
- Added wild zombie spawns
- Fixed wild zombie spawns
- Added more zombie sounds
- Variable refactor (login, min max wild z spawn)
- Delete magazine when it's empty
- Mute sound when logging in
- Zombies sprint after pursuit and not invincible

**Commits on Apr 1, 2016**
- Added extra military areas
- Only run tasks when logged in
- Zombie clothes and wandering fixes
- BUG FIX: FindNearby checks for alive units only
- BUG FIX: Zombies faced opposite way when attacking
- BUG FIX: Zombies spawned too close
- Zombie now faces player
- Fixed FPS drop when shooting zombies
- Dynamic zed spawning (instead of one area in city)
- Renamed and refactored functions
- Fixed persistent item placement (when placed, it would hover 2 feet)

**March 29, 2016**
- Removed ability to stand when logs are broken
- Fixed bug where dmg handlers were unregistered

**Mar 28, 2016**
- Fixed missing "fnc_zombiePunch"
- Object_say is now 3D and global
- Asset path changes
- Zombie idle sounds no longer synced together
- Health regenerate
- New zombie sounds
- Fixed zombies getting hurt sound
- Lowered zombie sound volume
- Added zombie sounds
- Zombie AI: Update path after waiting 1 second fix
- Zombie hit detection nerf
- Hitting player detection
- Hitting and only find alive targets

**Mar 27, 2016**
- Zombies now chase player
- Started zombie AI (WARNING BUGS)
- SVD/PKM weapon damage nerf
- Forgot to disable Arma 3 dmg system
- TheAmazingAussie committed 6 days ago
- Added zombie leg breaking

**Mar 26, 2016**
- Health update is instant now
- Convert FNFAL/DMR magazines
- Ability to convert magazines by double clicking

**Nov 8, 2015**
- Server-side loot spawn
- TheAmazingAussie committed on Nov 8, 2015


