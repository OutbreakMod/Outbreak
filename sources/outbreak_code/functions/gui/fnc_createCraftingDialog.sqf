private ["_canCreateRecipe"];

fnc_openDialog = {
	
	_dialog = createDialog "rscCraftingMenu";
	_idc = uiNamespace getVariable "rscCraftingMenu";

	call fnc_resetWindow;
	
	_control = _idc displayCtrl 35902;
	_index = _control lbAdd ("SELECT RECIPE");
	_control lbSetCurSel _index;
	
	_recipes = (configFile >> "CfgRecipes" >> "recipes") call BIS_fnc_getCfgData;
	
	{
		_classCfg = (configFile >> "CfgRecipes" >> _x);
		_recipeName = (_classCfg >> "recipeName") call BIS_fnc_getCfgData;
		
		_index = _control lbAdd _recipeName;
		_control lbSetData [_index, _x];
		
	} forEach _recipes;
	
	_control ctrlSetEventHandler ["LBSelChanged", "_this call fn_drawMaterials"];
	
		
	_control = _idc displayCtrl 35920;
	_control ctrlSetText "If items are in red, it means you don't have enough. Not all items will be consumed.";
};

fnc_resetWindow = {

	_idc = uiNamespace getVariable ["rscCraftingMenu", displayNull];
	
	_pictureIDC = 35904;
	_textIDC = 35912;

	for "_i" from 0 to 8 - 1 do { 
	
		_control = _idc displayCtrl _pictureIDC;
		_control ctrlSetText "";

		_control = _idc displayCtrl _textIDC;
		_control ctrlSetText "";
		_control ctrlSetTextColor [1,1,1,1]; //white
		
		_pictureIDC = _pictureIDC + 1;
		_textIDC = _textIDC + 1;
	};

};

fn_drawMaterials = {
	
	private ["_selection", "_selectedIndex", "_control", "_dialog", "_cfgName", "_magazine", "_recipe"];
	
	_control = _this select 0;  
	_selectedIndex = _this select 1; 
	_cfgName = _control lbData _selectedIndex;
	
	uiNamespace setVariable ['rscCraftingMenuRecipe', _cfgName];
	
	call fnc_resetWindow;
	
	_dialog = uiNamespace getVariable "rscCraftingMenu";
	_className = (configFile >> "CfgRecipes" >> _cfgName);
	_recipe = (_className >> "recipe") call BIS_fnc_getCfgData;
    _consume = (_className >> "consume") call BIS_fnc_getCfgData;

	_pictureIDC = 35904;
	_textIDC = 35912;
	
	for "_i" from 0 to (count _recipe) - 1 do { 
	
		_ingredient = _recipe select _i;
		
		_itemName = _ingredient select 0;
		_amount = _ingredient select 1;
		
		_currentAmount = [player, _itemName] call fnc_countItems;
		
		_item = (configFile >> "CfgMagazines" >> _itemName);
		
		_displayName = format["%1 %2/%3", ((_item >> "displayName") call BIS_fnc_getCfgData), _currentAmount, _amount];
		_control = _dialog displayCtrl _textIDC;
		
		if (_itemName in _consume) then {
			_displayName = _displayName + " (Consumed)";
		};
		
		_control ctrlSetText _displayName;
		
		if ([player, _itemName, _amount] call fnc_hasItem) then {
			//_control ctrlSetTextColor [0,0.4,0,1]; // green
		} else {
			_control ctrlSetTextColor [1,0.314,0.314,1];//[1,0,0,1]; // red
			uiNamespace setVariable ['rscCraftingMenuHasEnough', true];
		};
	
		_control = _dialog displayCtrl _pictureIDC;
		_control ctrlSetText ((_item >> "picture") call BIS_fnc_getCfgData);
		
		_pictureIDC = _pictureIDC + 1;
		_textIDC = _textIDC + 1;
	};
	
};

disableSerialization;
_dialog = uiNamespace getVariable ["rscCraftingMenu", displayNull];

if (isNull _dialog) then {
	if (!BUILDING) then {
		call fnc_openDialog;
	};
} else {
	closeDialog 0;
};
	
	