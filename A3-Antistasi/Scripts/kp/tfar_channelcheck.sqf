private["_ChannelName","_ServerName","_isTeamSpeakPluginEnabled"];
while{true}do
{
	_ChannelName = call TFAR_fnc_getTeamSpeakChannelName;
	_ServerName = call TFAR_fnc_getTeamSpeakServerName;
	_isTeamSpeakPluginEnabled = call TFAR_fnc_isTeamSpeakPluginEnabled;
	_DarfNixSehen = false;

	_WhiteListedChannels = ["TFAR"];
	if(((_ServerName != "Killah Potatoes") || !(_ChannelName in _WhiteListedChannels) || !_isTeamSpeakPluginEnabled) && !((getPlayerUID player == "76561198043011003") || (getPlayerUID player == "76561198019273245")))then{_DarfNixSehen = true;};
	if(_DarfNixSehen) then{cutText["As we use TFAR-(BETA) on our server, everyone should be on the same TeamSpeak Server.\nSo to play on this server you've to join:\nts3.killahpotatoes.de","BLACK FADED"];}
	else{cutText ["","PLAIN"];};
	uiSleep 10;
};