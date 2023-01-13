void main()
{
	// economy init
	CreateHive();
	GetHive().InitOffline();

	// player creation
	vector spawnPos = "3372 0 3090";
	Entity playerEnt = GetGame().CreatePlayer(NULL, "SurvivorF_Eva", spawnPos, 0, "NONE");
	PlayerBase player = (PlayerBase) playerEnt;
	GetGame().SelectPlayer(NULL, player);
};