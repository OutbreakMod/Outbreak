**Apr 10, 2016**
- [New] Players now scream when they break their legs
- [New] Strings are now localised
- [New] Spawning wild animals in grass fields
- [New] Two ambient soundtracks
- [Fixed] Zombies spawning near players (again)
- [Fixed] Huge fps drop (10% drop) when zombies spawned
- [Changed] Moved git repo files around
- [Changed] Zombies will notice player by sound, depending if prone/crouched/standing

**Apr 9, 2016**
- [New] Zombie AI overhaul (line of sight)
- [New] Zombies now run to the source of the gun shot
- [Fixed] Server error caused by player when logging in next to a wreck/dynamic event
- [Removed] publicVariable calls, changed to remoteExec

**Apr 8, 2016**
- [New] All zombie creation is now passed through "zombie_create"
- [Fixed] Server FPS improvements from hive/loading saving
- [Fixed] Can't find "sfx" sounds
- [Fixed] Zombies spawned by player are cleaned up when player is disconnected, instead of logging in
- [Changed] remoteExec used instead for object_speak class

**Apr 7, 2016**
- [New] Zombie stuck detection
- [New] Server clean up of objects based on timer
- [New] Added clean up of bodies (zombies and human)
- [New] Crafting UI now shows (current amount/needed amount)

**Apr 4, 2016**
- [New] Added multi-lined texted for items with longer names in UI
- [New] Searching ground for logs
- [Fixed] Fixed GUI height
- [Changed] Moved recipes away from CfgMagazines
- [Changed] Increased the amount of items to use in crafting UI
- [Changed] GUI now shows green/red if you have (or don't have) enough items

**Apr 3, 2016**
- [New] Crafting GUI by pressing U is now added
- [New] Reading from configuration with different types of recipes is added.
- [Changed] Removed deprecated ArmA 2 (getNumber, getArray, getText) calls and replaced with BIS_fnc_getCfgData

**Apr 2, 2016**
- [New] Added wild zombie spawns
- [New] Added more zombie sounds
- [New] Delete magazine when it's empty
- [New] Mute sound when logging in
- [New] Zombies sprint after pursuit
- [Fied] Zombies no longer invincible
- [Fixed] Wild zombie spawns
- [Changed] Variable refactor (login, min max wild z spawn)

**Commits on Apr 1, 2016**
- [New] Added extra military areas
- [New] Dynamic zed spawning (instead of one area in city)
- [Fixed] Zombie clothes and wandering fixes
- [Fixed] FindNearby checks for alive units only
- [Fixed] Zombies faced opposite way when attacking
- [Fixed] Zombies spawned too close
- [Fixed] FPS drop when shooting zombies
- [Fixed] Persistent item placement (when placed, it would hover 2 feet)
- [Changed] Renamed and refactored functions
- [Changed] Zombie now faces player
- [Changed] Only run tasks when logged in

**March 29, 2016**
- [Removed] Removed ability to stand when logs are broken
- [Fixed] Fixed bug where dmg handlers were unregistered

**Mar 28, 2016**
- [New] Health regenerate
- [New] Zombie sounds
- [New] Added zombie sounds
- [New] Zombie AI: Update path after waiting 1 second fix
- [New] Hitting
- [Fixed] Zombies targeting dead players
- [Fixed] Missing "fnc_zombiePunch"
- [Fixed] Zombies getting hurt sound
- [Changed] Hitting player detection
- [Changed] Zombie hit detection nerf
- [Changed] Object_say is now 3D and global
- [Changed] Asset path
- [Changed] Zombie idle sounds no longer synced with other zombies
- [Changed] Lowered zombie sound volume

**Mar 27, 2016**
- [New] Zombies now chase player
- [New] Started zombie AI (WARNING BUGS)
- [New] Added zombie leg breaking
- [Changed] SVD/PKM weapon damage nerf
- [Removed] Arma 3's default damage system

**Mar 26, 2016**
- [New] Convert FNFAL/DMR magazines
- [New] Ability to convert magazines by double clicking
- [Changed] Health update is instant now

**Nov 8, 2015**
- [New] Server-side loot spawn

*The first commit can be found [here](https://github.com/OutbreakMod/Outbreak/commit/967fc3781b8805d61ee70946b7b9893cb74abc87)*