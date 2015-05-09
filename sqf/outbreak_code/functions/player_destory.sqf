/*
	Clears variables
	@author: TheAmazingAussie
*/

_unit = _this select 0;

// kill tasks
//terminate _spawnThread;
//terminate _ambienceThread;
//terminate _keyPressThread;
//terminate _itemInteractThread;

// no more hive sync
_unit setVariable ["outbreaklogin", -1];