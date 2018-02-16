LOGGED_IN = true;
call player_missionLogin;

setAperture -1;
1 fadeSound 1;
1 fadeSpeech 1;
1 fadeMusic 1;

player enableSimulation true;
player allowDammage true;
player enableAI 'FSM';
player enableAI 'ANIM';
player enableAI 'MOVE';

IN_GAME = true;

player addAction ["Select No Weapon", {
    player action ["SwitchWeapon", player, player, 100];
    player switchCamera cameraView;
}];