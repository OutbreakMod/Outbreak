fnc_openDialog = {
	_dialog = createDialog "rscUserSettings";
	_idc = uiNamespace getVariable "rscUserSettings";
};

disableSerialization;
_dialog = uiNamespace getVariable ["rscUserSettings", displayNull];

if (isNull _dialog) then {
	if (!BUILDING) then {
		call fnc_openDialog;
	};
} else {
	closeDialog 0;
};
	
	