class CfgRemoteExec
{        
	class Functions
	{
		mode = 1;
		jip = 1;
		
		/* server only remoteexec */
		class remoteExec_add_cleanup { allowedTargets=2; };
		class remoteExec_new_object { allowedTargets=2; }; 
		class remoteExec_player_delete { allowedTargets=2; };
		class remoteExec_player_login { allowedTargets=2; };
		class remoteExec_spawn_loot { allowedTargets=2; };
		class remoteExec_player_save { allowedTargets=2; };
		
		/* client only remoteexec */
		class remoteExec_camera_shake { allowedTargets=1; };
		class fnc_anim_switchMove { allowedTargets=1; };
		class fnc_anim_playMoveNow { allowedTargets=1; };
		class fnc_object_speak { allowedTargets=1; };
	};
	
    class Commands
    {
        mode=0;
        jip=0;
    };
};