#pragma once
#include "enet/enet.h"
#include "gamepacket.h"
#include "server.h"

#define cloth0 cloth_hair
#define cloth1 cloth_shirt
#define cloth2 cloth_pants
#define cloth3 cloth_feet
#define cloth4 cloth_face
#define cloth5 cloth_hand
#define cloth6 cloth_back
#define cloth7 cloth_mask
#define cloth8 cloth_necklace 
#define cloth9 cloth_ances
struct InventoryItem {
	short itemID;
	byte itemCount;
};
struct PlayerInventory {
	vector<InventoryItem> items;
	int inventorySize = 20;
};

struct Note {
	string who = "";
	string time = "";
	string reason = "";
};
struct PlayerNotes {
	vector<Note> notes;

};

struct TradeItem
{
	int id;
	int count;
};

struct PlayerInfo {
	string mac = "", rid = "", gid = "";
	int play_time = 0;
	int wrong_onto_something = 0;
	bool registerverify = false;
	int kipaskiek_turi_kainoti = 0;
	int buy_dd = 0;
	int play_x = 0;
	int play_y = 0;
	/*HELLO*/
	long long int lastPPS = 0;
	int pps = 0;
	/*HM*/
	bool blueName = false;
	bool lName = false;
	bool tutorial = false;
	bool isIn = false;
	int transform = 0;
	int lastPunchForeground = 0;
	int lastPunchBackground = 0;
	bool disconnect_ = false;
	int billboardid = 0;
	int suckerid = 0;
	string suckername = "";
	int laststorebuyprice = 0;
	long long int saco = 0;
	int laststorebuyid = 0;
	int laststorebuycount = 0;
	long long int last_afk = 0;
	int billboardtab = 0;
	string lastfriend = "";
	int billboardprice = 0;
	int billboardperwhat = 0;
	int pure_state = 0;
	bool playing = false;
	int netID;
	int chatwarn = 0;
	string pin = "";
	int warncheck2 = 0;
	bool isHidde = false;
	long long int lastSpin = 0;
	bool haveGrowId = false;
	int lasttrashitem;
	int warncheat = 0;
	int laststoresellworldlocks = 0;
	int laststoreselldiamondlocks = 0;
	int laststoresellid = 0;
	int laststoresellcount = 0;
	string lastvendbuycount = "";
	bool haveSubscription = false;
	long long int lastpackettype = 0;
	long long int lastTRADE = 0;
	int warnforcheat = 0;

	/*FRIEND SYSTEM*/
	bool lastLC = false;
	bool showloc = true;
	string lastFrnName = "";
	string lastFrn = "";
	string lastFrnWorld = "";
	vector<string>friendinfo;
	/*LOL*/

	string lastInfoname = "";
	string lastgm = "";
	string lastgmname = "";
	string lastgmworld = "";
	int noclipas_ = 0;
	string guildlast = "";
	bool isinvited = false;
	int guildBg = 0;
	int guildFg = 0;
	int petlevel = 0;
	string guildStatement = "";
	string guildLeader = "";
	vector <string> guildmatelist;
	vector<string>guildMembers;
	vector<string>guildGE;
	vector<string>guildGC;
	int guildlevel = 0;
	int guildexp = 0;
	string createGuildName = "";
	string createGuildStatement = "";
	string createGuildFlagBg = "";
	string createGuildFlagFg = "";
	string LastState = "";
	string guild = "";
	bool joinguild = false;


	string tankIDName = "";
	string tankIDPass = "";
	string requestedName = "";
	string rawName = "";
	string lastMsgerWorld = "";
	vector<string>worldsowned;
	string displayName = "";
	string country = "";
	int adminLevel = 0;
	string currentWorld = "EXIT";
	long long int lastPackets = 0;
	int warn = 0;
	bool radio = true;
	int xptime = 0;
	int x;
	int xpboost = 0;
	int y;
	int x1;
	int lastUserID = 0;
	int wrenchedBlockLocation = -1;
	int puncheffect;
	int y1;
	string lastuser;
	bool isRotatedLeft = false;
	string charIP = "";
	bool isUpdating = false;
	string lastdialog = "";
	bool joinClothesUpdated = false;
	bool muted = false;
	unsigned int gems = 0;
	int userID = 0;
	bool hasLogon = false;

	bool isInvitedGuild = false;
	bool taped = false;
	bool isFishing = false;
	string registerIP;
	string ipAddress;
	int number1 = rand() % 10;
	int number2 = rand() % 100;
	bool validated = false;
	string backupName = "";
	int cloth_hair = 0; // 0
	int cloth_shirt = 0; // 1
	int cloth_pants = 0; // 2
	int cloth_feet = 0; // 3
	int cloth_face = 0; // 4
	int cloth_hand = 0; // 5
	bool didAlready = false;
	int cloth_back = 0; // 6
	int cloth_mask = 0; // 7
	int cloth_necklace = 0; // 8
	int cloth_ances = 0;
	int xp = 0;
	int level = 0x1;
	string platformID;
	int updateReq;
	bool canWalkInBlocks = false; // 1
	bool canDoubleJump = false; // 2
	bool isInvisible = false; // 4
	bool noHands = false; // 8

	int lavaLevel = 0;
	bool noEyes = false; // 16
	bool noBody = false; // 32
	bool devilHorns = false; // 64
	bool goldenHalo = false; // 128
	bool isFrozen = false; // 2048
	bool isCursed = false; // 4096
	bool isDuctaped = false; // 8192
	bool haveCigar = false; // 16384
	bool isShining = false; // 32768
	bool isZombie = false; // 65536
	bool isHitByLava = false; // 131072
	bool haveHauntedShadows = false; // 262144
	bool haveGeigerRadiation = false; // 524288
	bool haveReflector = false; // 1048576
	bool isEgged = false; // 2097152
	bool havePineappleFloag = false; // 4194304
	bool haveFlyingPineapple = false; // 8388608
	bool haveSuperSupporterName = false; // 16777216
	bool haveSupperPineapple = false; // 33554432

	int lqueststep = 0;
	int lquestprogress = 0;
	int ltype = 0;

	long long int lastBREAK = 0;


	bool isInFinalTradeDialog = false;
	//Blueberry
   ///////////////////////////////
	bool blueBerry = false;
	int usedBerry = 0;
	int lastBerry = 0;
	///////////////////////////////
	bool isBot = false;

	string banName = "";

	bool loadedInventory = false;

	int geigerTimeModifier = 4;
	int geigerIdleScore = 0;

	//Coffee
///////////////////////////////
	bool Caffeine = false;
	int usedCoffee = 0;
	int leftCoffee = 0;
	///////////////////////////////
	bool acceptedFinalDialog = false;
	int infiniteZoomEnabled = 0;

	int infiniteJumpsEnabled = 0;
	bool isTrading = false;
	bool isWaitingForTrade = false;
	int isWaitingForTradeWithUserID = 0;
	vector<TradeItem> tradeItems;
	bool isAcceptingTrade = false;
	int isTradingWithUserID = 0;

	int lastTradeNetID = 0;
	int lastTradeItem = 0;
	string lastTradeName = "";

	int buygkto = 0;

	string currentTradeItems = "";
	int bandate = 0;
	int firesOutput = 0;
	bool isNicked = false;
	int lastPunchY = 0;
	int respawnX = 0;
	int respawnY = 0;
	int mstate = 0;
	int smstate = 0;
	int insInvis = 0;
	int lastPunchX = 0;
	int lastdropitemcount = 0;
	int lastdropitem = 0;
	long long int lastJoinReq = 0;
	bool ignorePackets = false;
	string lastMsger = "";
	string lastMsgWorld = "";
	string lastMsgerTrue = "";
	int bantime = 0;
	int ban = 0;
	string lastsbworld = "";
	int respawnPos = -1;
	//bool respawnPos
	int skinColor = 0x8295C3FF; //normal SKin color like gt!
	int droppeditemcount = 0;
	PlayerInventory inventory;

	PlayerNotes notes;

	int magplantitemid = 0;

	int magplantx = -1;
	int magplanty = -1;
	bool useGeiger = false;
	long long int lastChat = 0;
	long long int lastSB = 0;
	long long int lastGeigerTime = 0;
	long long int weatherPunch = 0;
	string ItemsOption = "cape=147,56,143:collar=147,56,143:cape2=137,30,43:collar2=137,30,43:delay=5";
};
int GetQuantityOfItem(ENetPeer* peer, const int fItemId) {
	auto quantity = 0;
	try {
		for (auto i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++) {
			if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == fItemId) {
				quantity = ((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount;
				break;
			}
		}
	}
	catch (const std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
	return quantity;
}
string GetItemCount(ENetPeer* peer, int itemid) {
	auto KiekTuri = 0;
	try {
		for (int i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++) {
			if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == itemid && ((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount >= 1) {
				KiekTuri = ((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount;
				break;
			}
		}
	}
	catch (const std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
	if (KiekTuri != 0) return to_string(KiekTuri);
	else return "";
}
bool isPickaxe(ENetPeer* peer) {
	if (((PlayerInfo*)(peer->data))->cloth_hand == 2754 || ((PlayerInfo*)(peer->data))->cloth_hand == 7830 || ((PlayerInfo*)(peer->data))->cloth_hand == 930 || ((PlayerInfo*)(peer->data))->cloth_hand == 1874 || ((PlayerInfo*)(peer->data))->cloth_hand == 6368 || ((PlayerInfo*)(peer->data))->cloth_hand == 2572 || ((PlayerInfo*)(peer->data))->cloth_hand == 1484 || ((PlayerInfo*)(peer->data))->cloth_hand == 734 || ((PlayerInfo*)(peer->data))->cloth_hand == 98 || ((PlayerInfo*)(peer->data))->cloth_hand == 1438 || ((PlayerInfo*)(peer->data))->cloth_hand == 4956 || ((PlayerInfo*)(peer->data))->cloth_hand == 1708) {
		return true;
	}
	else {
		return false;
	}
}

bool isGFLAGS(int tile) {
	if (tile == 5830 || tile == 5832 || tile == 5834 || tile == 5836 || tile == 5838 || tile == 5840 || tile == 5842 || tile == 5844 || tile == 5846 || tile == 5848 || tile == 5850 || tile == 5852 || tile == 5854 || tile == 5856 || tile == 5858 || tile == 5860 || tile == 5862 || tile == 5864 || tile == 5866 || tile == 5868 || tile == 5870 || tile == 5872 || tile == 5874 || tile == 5876 || tile == 5878 || tile == 5880 || tile == 5882 || tile == 5884 || tile == 5886 || tile == 5888 || tile == 5890 || tile == 5892 || tile == 5894 || tile == 5896 || tile == 5898 || tile == 5900 || tile == 5902 || tile == 5904 || tile == 5906 || tile == 5908 || tile == 5910 || tile == 5912 || tile == 5914 || tile == 5916 || tile == 5918 || tile == 5920 || tile == 5922 || tile == 5924 || tile == 5926 || tile == 5928 || tile == 5930 || tile == 5932) return true;
	else return false;
}
int getInventoryItem(ENetPeer* peer, int item)
{
	int count = 0;
	try {
		for (int i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++) {
			if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == item) {
				count = (unsigned int)((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount;
				break;
			}
		}
	} catch (const std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
	return count;
}
bool CheckItemExists(ENetPeer* peer, const int fItemId)
{
	bool isExists = false;
	try {
		for (auto i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++) {
			if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == fItemId) {
				isExists = true;
				break;
			}
		}
	} catch (const std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
	return isExists;
}
bool CheckItemMaxed(ENetPeer* peer, const int fItemId, int fQuantityAdd)
{
	auto isMaxed = false;
	try {
		for (auto i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++) {
			if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == fItemId && ((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount + fQuantityAdd > 200) {
				isMaxed = true;
				break;
			}
		}
	}
	catch (const std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
	return isMaxed;
}

string OutputBanTime(int n) {
	string x;
	const auto day = n / (24 * 3600);
	if (day != 0) x.append(to_string(day) + " Days ");
	n = n % (24 * 3600);
	const auto hour = n / 3600;
	if (hour != 0) x.append(to_string(hour) + " Hours ");
	n %= 3600;
	const auto minutes = n / 60;
	if (minutes != 0) x.append(to_string(minutes) + " Minutes ");
	n %= 60;
	const auto seconds = n;
	if (seconds != 0) x.append(to_string(seconds) + " Seconds");
	return x;
}


enum ClothTypes {
	HAIR,
	SHIRT,
	PANTS,
	FEET,
	FACE,
	HAND,
	BACK,
	MASK,
	NECKLACE,
	ANCES,
	//NONE
};
enum BlockTypes {
	COMPONENT,
	RANDOM_BLOCK,
	Painting_Easel,
	DEADLY,
	ANIM_FOREGROUND,
	DONATION,
	DISPLAY_SHELF,
	TREASURE,
	DISPLAY,
	Kranken,
	PORTAL,
	TRAMPOLINE,
	PLATFORM,
	SUCKER,
	GROUND_BLOCK,
	VENDING,
	SFX_FOREGROUND,
	FOREGROUND,
	BACKGROUND,
	SEED,
	PAIN_BLOCK,
	BEDROCK,
	MAIN_DOOR,
	SIGN,
	DOOR,
	MAILBOX,
	CLOTHING,
	FIST,
	CONSUMABLE,
	CHECKPOINT,
	GATEWAY,
	LOCK,
	WEATHER,
	MAGIC_EGG,
	FACTION,
	GEMS,
	JAMMER,
	BULLETIN_BOARD,
	Mannequin,
	TOGGLE_FOREGROUND,
	SWITCH_BLOCK,
	CHEST,
	UNKNOWN
};
#define Property_Zero 0
#define Property_NoSeed 1
#define Property_Dropless 2
#define Property_Beta 4
#define Property_Mod 8
#define Property_Untradable 16
#define Property_Wrenchable 32
#define Property_MultiFacing 64
#define Property_Permanent 128
#define Property_AutoPickup 256
#define Property_WorldLock 512
#define Property_NoSelf 1024
#define Property_RandomGrow 2048
#define Property_Public 4096


bool IsValidAction(string action)
{
	if (action == "/smile" ||
		action == "/cry" ||
		action == "/laugh" ||
		action == "/lol" ||
		action == "/mad" ||
		action == "/wave" ||
		action == "/dance" ||
		action == "/dance2" ||
		action == "/love" ||
		action == "/kiss" ||
		action == "/sleep" ||
		action == "/yes" ||
		action == "/no" ||
		action == "/wink" ||
		action == "/troll" ||
		action == "/cheer" ||
		action == "/sad" ||
		action == "/fp" ||
		action == "/facepalm" ||
		action == "/omg" ||
		action == "/shrug" ||
		action == "/idk" ||
		action == "/furious" ||
		action == "/rolleyes" ||
		action == "/eyeroll" ||
		action == "/foldarms" ||
		action == "/fold" ||
		action == "/stubborn" ||
		action == "/fa" ||
		action == "/dab" ||
		action == "/sassy")
		return true;
	return false;
}



struct DroppedItem { // TODO
	int id;
	int uid;
	int count;
	float x;
	float y;
};
struct ItemDefinition {
	int id;
	int properties;
	unsigned char editableType;
	unsigned char itemCategory;
	unsigned char actionType = 0;
	unsigned char hitSoundType = 0;

	std::string name;

	std::string texture = "";
	int textureHash = 0;
	unsigned char itemKind = 0;
	int val1;
	unsigned char textureX = 0;
	unsigned char textureY = 0;
	unsigned char spreadType = 0;
	unsigned char isStripeyWallpaper = 0;
	unsigned char collisionType = 0;

	unsigned char breakHits = 0;

	int dropChance = 0;
	unsigned char clothingType = 0;
	BlockTypes blockType;
	int growTime;
	ClothTypes clothType;
	int16_t rarity = 0;
	unsigned char maxAmount = 0;
	std::string extraFile = "";
	int extraFileHash = 0;
	int audioVolume = 0;
	std::string petName = "";
	std::string petPrefix = "";
	std::string petSuffix = "";
	std::string petAbility = "";
	unsigned	char seedBase = 0;
	unsigned	char seedOverlay = 0;
	unsigned	char treeBase = 0;
	unsigned	char treeLeaves = 0;
	int seedColor = 0;
	int seedOverlayColor = 0;
	bool isMultiFace = false;
	short val2;
	short isRayman = 0;
	std::string extraOptions = "";
	std::string texture2 = "";
	std::string extraOptions2 = "";
	std::string punchOptions = "";
	std::string description = "Nothing to see.";
};
vector<string> ItemCategoryToProperties(unsigned char bcateg, unsigned char btype) {
	std::vector<std::string> list;
	if ((btype & 0x40) > 0)
	{
		list.push_back("NoShadow");
	}
	if ((btype & 0x20) > 0)
	{
		list.push_back("NoSelf");
	}
	if ((btype & 2) > 0)
	{
		list.push_back("Wrenchable");
	}
	if ((btype & 8) > 0)
	{
		list.push_back("Dropless");
	}
	if ((btype & 0x10) > 0)
	{
		list.push_back("NoSeed");
	}
	if ((btype & 4) > 0)
	{
		list.push_back("Permanent");
	}
	if ((btype & 1) > 0)
	{
		list.push_back("MultiFacing");
	}
	if ((btype & 0x80) > 0)
	{
		list.push_back("WorldLock");
	}
	if ((bcateg & 0x80) > 0)
	{
		list.push_back("Untradable");
	}
	if ((bcateg & 0x20) > 0)
	{
		list.push_back("Foreground");
	}
	if ((bcateg & 0x10) > 0)
	{
		list.push_back("Public");
	}
	if ((bcateg & 1) > 0)
	{
		list.push_back("Beta");
	}
	if ((bcateg & 4) > 0)
	{
		list.push_back("Mod");
	}
	if ((bcateg & 8) > 0)
	{
		list.push_back("RandomGrow");
	}
	if ((bcateg & 0x40) > 0)
	{
		list.push_back("Holiday");
	}
	if ((bcateg & 2) > 0)
	{
		list.push_back("AutoPickup");
	}
	return list;
}
struct Doorxd {

	string linksToWorld = "";
	string doorId = "";
	int x;
	int y;
	bool locked;
};
vector<ItemDefinition> itemDefs;
int getState(PlayerInfo* info) {
	int val = 0;
	val |= info->canWalkInBlocks << 0;
	val |= info->canDoubleJump << 1;
	val |= info->isInvisible << 2;
	val |= info->noHands << 3;
	val |= info->noEyes << 4;
	val |= info->noBody << 5;
	val |= info->devilHorns << 6;
	val |= info->goldenHalo << 7;
	val |= info->isFrozen << 11;
	val |= info->isCursed << 12;
	val |= info->isDuctaped << 13;
	val |= info->haveCigar << 14;
	val |= info->isShining << 15;
	val |= info->isZombie << 16;
	val |= info->isHitByLava << 17;
	val |= info->haveHauntedShadows << 18;
	val |= info->haveGeigerRadiation << 19;
	val |= info->haveReflector << 20;
	val |= info->isEgged << 21;
	val |= info->havePineappleFloag << 22;
	val |= info->haveFlyingPineapple << 23;
	val |= info->haveSuperSupporterName << 24;
	val |= info->haveSupperPineapple << 25;
	return val;
}

string EntranceTiles(int visual, uint32_t owner) {
	string data;
	data.resize(4 + 2 + 4 + 4 + 4 + 8);
	data[2] = 0x01;
	data[4] = 3;
	data[5] = visual;
	STRINT(data, 6) = owner;
	return data;
}
string EntranceTilesLocked(int visual, uint32_t owner) {
	string data;
	data.resize(4 + 2 + 4 + 4 + 4 + 8);
	data[2] = 0x01;
	data[5] = visual;
	STRINT(data, 6) = owner;
	return data;
}
void setupVIP(BYTE* raw) {
	raw[0] = 0x5;
	raw[1] = 0x0;
	raw[2] = 0x0;
	raw[3] = 0x0;
	raw[4] = 0x0;
	raw[5] = 0x0;
	raw[6] = 0x0;
	raw[7] = 0x0;
	raw[8] = 0x0;
	raw[9] = 0x8000000;
	raw[10] = 0x80000;
	raw[11] = 0x800;
	raw[12] = 0x8;
	raw[13] = 0x0;
	raw[14] = 0x0; //0
	raw[15] = 0x0; //0
	raw[16] = 0x0; //0
	raw[17] = 0x0; //0
	raw[18] = 0x0; //0
	raw[19] = 0x0; //0
	raw[20] = 0x0; //0
	raw[21] = 0x0; //0
	raw[22] = 0x0; //0
	raw[23] = 0x0; //0
	raw[24] = 0x0; //0
	raw[25] = 0x0; //0
	raw[26] = 0x0; //0
	raw[27] = 0x0; //0
	raw[28] = 0x0; //0
	raw[29] = 0x0; //0
	raw[30] = 0x0; //0
	raw[31] = 0x0; //0
	raw[32] = 0x0; //0
	raw[33] = 0x0; //0
	raw[34] = 0x0; //0
	raw[35] = 0x0; //0
	raw[36] = 0x0; //0
	raw[37] = 0x0; //0
	raw[38] = 0x0; //0
	raw[39] = 0x0; //0
	raw[40] = 0x0; //0
	raw[41] = 0x41000000; //1090519040
	raw[42] = 0x410000; //4259840
	raw[43] = 0x4100; //16640
	raw[44] = 0x41; //65
	raw[45] = 0x17000000; //385875968
	raw[46] = 0x170000; //1507328
	raw[47] = 0x1700; //5888
	raw[48] = 0x17; //23
	raw[49] = 0x12000000; //301989888
	raw[50] = 0x120000; //1179648
	raw[51] = 0x1200; //4608
	raw[52] = 0x12; //18
	raw[53] = -0x2a000000; //-704643072
	raw[54] = 0xed60000; //248905728
	raw[55] = 0xed600; //972288
	raw[56] = 0xed6; //3798
	raw[57] = 0xe; //14
	raw[58] = 0x0; //0
	raw[59] = 0x19000000; //419430400
	raw[60] = 0x190000; //1638400
	raw[61] = 0x2c001900; //738203904
	raw[62] = 0x2c0019; //2883609
	raw[63] = -0x52ffd400; //-1392497664
	raw[64] = -0x2052ffd4; //-542310356
	raw[65] = -0x48205300; //-1210077952
	raw[66] = 0x2b7dfad; //45604781
	raw[67] = 0x2b7df; //178143
	raw[68] = 0x2b7; //695
	raw[69] = 0x2; //2
	raw[70] = 0x0; //0
	raw[71] = 0x0; //0
	raw[72] = 0x0; //0
	raw[73] = 0x58000000; //1476395008
	raw[74] = 0x580000; //5767168
	raw[75] = 0x5800;
	raw[76] = 0x58;
	raw[77] = 0x23000000;
	raw[78] = 0x230000;
}
void ADBlocker_Setup(BYTE* raw) {
	raw[0] = 5, raw[1] = 0, raw[2] = 0, raw[3] = 0, raw[4] = 0, raw[5] = 0, raw[6] = 0, raw[7] = 0, raw[8] = 0, raw[9] = 0, raw[10] = 0, raw[11] = 2048, raw[12] = 8, raw[13] = 0, raw[14] = 0, raw[15] = 0, raw[16] = 0, raw[17] = 0, raw[18] = 0, raw[19] = 0, raw[20] = 0, raw[21] = 0, raw[22] = 0, raw[23] = 0, raw[24] = 0, raw[25] = 0, raw[26] = 0, raw[27] = 0, raw[28] = 0, raw[29] = 0, raw[30] = 0, raw[31] = 0, raw[32] = 0, raw[33] = 0, raw[34] = 0, raw[35] = 0, raw[36] = 0, raw[37] = 0, raw[38] = 0, raw[39] = 0, raw[40] = 0, raw[41] = 0, raw[42] = 0, raw[43] = 256, raw[44] = 1, raw[45] = 0, raw[46] = 0, raw[47] = 15104, raw[48] = 59, raw[49] = 0, raw[50] = 0, raw[51] = 7680, raw[52] = 30, raw[53] = 0, raw[54] = 0, raw[55] = 45056, raw[56] = 3760, raw[57] = 3598, raw[58] = 14, raw[59] = 0, raw[60] = 0, raw[61] = 256, raw[62] = 1, raw[63] = 10752, raw[64] = 42, raw[65] = 256, raw[66] = 1, raw[67] = 0, raw[68] = 0, raw[69] = 0, raw[70] = 0, raw[71] = 0, raw[72] = 0, raw[73] = 0, raw[74] = 0, raw[75] = 0, raw[76] = 0, raw[77] = 0, raw[78] = 0, raw[79] = 0, raw[80] = 0, raw[81] = 65280, raw[82] = 65535, raw[83] = 65535, raw[84] = 65535, raw[85] = 6399, raw[86] = 64792, raw[87] = 65021, raw[88] = 65021, raw[89] = 65021, raw[90] = 56829;
}
void ADBlocker(ENetPeer* peer) {
	const auto plength = 90;
	const auto raw = new BYTE[plength];
	memset(raw, 0, plength);
	ADBlocker_Setup(raw);
	ENetPacket* p = enet_packet_create(0, plength + 4, ENET_PACKET_FLAG_RELIABLE);
	const auto four = 4;
	memcpy(p->data, &four, sizeof(int));
	memcpy((char*)p->data + 4, raw, plength);
	enet_peer_send(peer, 0, p);
	delete[] raw;
}
void VIP_Door(ENetPeer* peer, const int x, const int y, const int fg, const int bg, const int owner) {
	const auto plength = 79;
	const auto raw = new BYTE[plength];
	memset(raw, 0, plength);
	setupVIP(raw);
	memcpy(raw + 44, &x, sizeof(int));
	memcpy(raw + 48, &y, sizeof(int));
	memcpy(raw + 56, &fg, sizeof(short));
	memcpy(raw + 58, &bg, sizeof(short));
	memcpy(raw + 66, &owner, sizeof(int));
	ENetPacket* p = enet_packet_create(0, plength + 4, ENET_PACKET_FLAG_RELIABLE);
	const auto four = 4;
	memcpy(p->data, &four, sizeof(int));
	memcpy((char*)p->data + 4, raw, plength);
	enet_peer_send(peer, 0, p);
	delete[] raw;
}

struct WorldItem {
	int rate_of_fire = 10, projectile_speed = 100;
	int flags = 0x00000000;
	uint16_t foreground = 0;
	uint16_t background = 0;
	string destWorld = "";
	string destId = "";
	string currId = "";
	string blockstate = "";
	bool spliced = false;
	bool silenced = false;
	int growtime = 0;
	int fruitcount = 0;
	bool entrance_open = false;
	int breakLevel = 0;
	long long int breakTime = 0;
	bool rm = false;
	bool water = false;
	bool opened = false;
	bool fire = false;
	bool glue = false;
	bool red = false;
	bool green = false;
	bool blue = false;
	bool activated = false;
	string worldinput = "";
	/*vending*/
	bool destroy = false;
	int vdraw = 0;
	int breakstate = 0;
	int breakbotstate = 0;
	string sign = "";
	string doorid = "";
	bool flipped = false;
	bool activeWeather = false;
	int intdata = 0;
	int yellowGems = 0;
	int blueGems = 0;
	string	hmonitor_owner = "";
	int redGems = 0;
	int greenGems = 0;
	int purpleGems = 0;
	bool dropCollectBlocked = false;



};

struct gameupdatepacket_t {
	uint8_t m_type;
	uint8_t m_netid;
	uint8_t m_jump_amount;
	uint8_t m_count;
	int32_t m_player_flags;
	int32_t m_item;
	int32_t m_packet_flags;
	float m_struct_flags;
	int32_t m_int_data;
	float m_vec_x;
	float m_vec_y;
	float m_vec2_x;
	float m_vec2_y;
	float m_particle_time;
	uint32_t m_state1;
	uint32_t m_state2;
	uint32_t m_data_size;
	uint32_t m_data;
};
typedef struct gametankpacket_t {
	int32_t m_type;
	char m_data;
} gametextpacket_t;
struct BlockData {
	int packetType;
	int x;
	int y;
	int fg;
	int bg;
	int charState;
	int plength;
	int visual;
	int visual2;

};
BYTE* makeData(BlockData bdata) {
	BYTE* data = new BYTE[bdata.plength];
	memset(data, 0, bdata.plength);
	memcpy(data + 0, &bdata.packetType, 2);
	memcpy(data + 12, &bdata.charState, 2);
	memcpy(data + 44, &bdata.x, 4);
	memcpy(data + 48, &bdata.y, 4);
	memcpy(data + 56, &bdata.fg, 2);
	memcpy(data + 58, &bdata.bg, 2);
	memcpy(data + 60, &bdata.visual, 4);
	memcpy(data + 64, &bdata.visual2, 4);
	return data;
}
struct WorldAdministration {
	int userID = 0;
	int bannedAt = 0;
};

BYTE* packStuffVisual(TileExtra* dataStruct, int options, int gravity)
{
	BYTE* data = new BYTE[102];
	for (auto i = 0; i < 102; i++)
	{
		data[i] = 0;
	}
	memcpy(data, &dataStruct->packetType, 4);
	memcpy(data + 8, &dataStruct->netID, 4);
	memcpy(data + 12, &dataStruct->characterState, 4);
	memcpy(data + 44, &dataStruct->punchX, 4);
	memcpy(data + 48, &dataStruct->punchY, 4);
	memcpy(data + 52, &dataStruct->charStat, 4);
	memcpy(data + 56, &dataStruct->blockid, 2);
	memcpy(data + 58, &dataStruct->backgroundid, 2);
	memcpy(data + 60, &dataStruct->visual, 4);
	memcpy(data + 64, &dataStruct->displayblock, 4);
	memcpy(data + 68, &gravity, 4);
	memcpy(data + 70, &options, 4);
	return data;
}
struct WorldInfo {
	long long int last_SAVE = 0;
	bool allowDropTakeAll = true;
	bool isEvent = true;
	bool WorldSaved = false;
	int geiger_locX = 64;
	int geiger_locY = 64;
	int bpm = 100;
	vector<string> viplist;
	int width = 100;
	int invisible_music = 0;
	int droppedCount = 0;
	vector<Doorxd> door;
	int height = 60;
	string name = "TEST";
	vector<string> accessworld;
	vector<WorldAdministration> wbans;

	bool enablecolleciton = false;
	int magX = 0;
	int magY = 0;

	bool silence = false;
	bool rainbows = false;
	vector<WorldItem> items{};
	string ownerDisplayName = "";
	int magplantGems = 0;

	string owner = "";
	string itemsdropped = "";
	vector<DroppedItem> droppedItems;
	bool isPublic = false;
	int ownerID = 0;
	int weather = 0;
	bool isPineappleGuard = false;
	bool isCasino = false;
	bool isNuked = false;

	bool allowNoclip = true;
	bool item_changed = false;
	int stuff_gravity = 50;
	bool stuff_spin = false;
	bool stuff_invert = false;
	int stuffID = 2;
	int bgID = 14;
	int hw_red = 255;
	int hw_green = 128;
	int hw_blue = 64;
};

enum LabelStyles
{

	LABEL_BIG,
	LABEL_SMALL
};

enum SpacerTypes
{
	SPACER_BIG,
	SPACER_SMALL
};

enum CheckboxTypes
{
	CHECKBOX_SELECTED,
	CHECKBOX_NOT_SELECTED
};
/*string RgbToHex(int rNum, int gNum, int bNum)
{
	string result;

	char r[255];
	sprintf_s(r, "%.2X", rNum);
	result.append(r);

	char g[255];
	sprintf_s(g, "%.2X", gNum);
	result.append(g);

	char b[255];
	sprintf_s(b, "%.2X", bNum);
	result.append(b);

	return result;
}*/
unsigned long RgbToHex(int r, int g, int b)
{
	return ((b & 0xff) << 24) + ((g & 0xff) << 16) + ((r & 0xff) << 8) + (255 & 0xff);
}
void RiftOptions(ENetPeer* peer) {
	string opt = ((PlayerInfo*)(peer->data))->ItemsOption;
	vector<string> ex = explode(":", opt);

	string capecolor = explode("=", ex[0])[1];
	string collarcolor = explode("=", ex[1])[1];
	string capecolor2 = explode("=", ex[2])[1];
	string collarcolor2 = explode("=", ex[3])[1];
	int delay = stoi(explode("=", ex[4])[1]);
	//style 1
	//get cpae color rgb
	string rc = explode(",", capecolor)[0];
	string gc = explode(",", capecolor)[1];
	string bc = explode(",", capecolor)[2];
	//get collar color
	string cr = explode(",", collarcolor)[0];
	string cg = explode(",", collarcolor)[1];
	string cb = explode(",", collarcolor)[2];
	//style 2
	//get cpae color rgb
	string rc2 = explode(",", capecolor2)[0];
	string gc2 = explode(",", capecolor2)[1];
	string bc2 = explode(",", capecolor2)[2];
	//get collar color
	string cr2 = explode(",", collarcolor2)[0];
	string cg2 = explode(",", collarcolor2)[1];
	string cb2 = explode(",", collarcolor2)[2];

	string dialog = "add_label_with_icon|big|`w" + itemDefs[10424].name + "|left|10424|\nadd_label|big|`oCape Style 1|left|\nadd_label|small|`oCape Color:|left|\nadd_text_input|rc|`oRed:|" + rc + "|3|\nadd_text_input|rg|`oGreen:|" + gc + "|3|\nadd_text_input|rb|`oBlue:|" + bc + "|3|\nadd_spacer|small|\nadd_label|small|`oCape Collar Color:|left|\nadd_text_input|cr|`oRed:|" + cr + "|3|\nadd_text_input|cg|`oGreen:|" + cg + "|3|\nadd_text_input|cb|`oBlue:|" + cb + "|3|\nadd_spacer|small|\nadd_label|big|`oCape Style 2|left|\nadd_label|small|`oCape Color:|left|\nadd_text_input|rc2|`oRed:|" + cr2 + "|3|\nadd_text_input|rg2|`oGreen:|" + gc2 + "|3|\nadd_text_input|rb2|`oBlue:|" + bc2 + "|3|\nadd_spacer|small|\nadd_label|small|`oCape Collar Color:|left|\nadd_text_input|cr2|`oRed:|" + cr2 + "|3|\nadd_text_input|cg2|`oGreen:|" + cg2 + "|3|\nadd_text_input|cb2|`oBlue:|" + cb2 + "|3|\nadd_spacer|small|\nadd_text_input|mmmmkmmkkk|`oTime Dilation Cycle Time|" + std::to_string(delay) + "|6|\nadd_spacer|small|\nadd_button|restore|`oRestore to default|noflags|0|0|\nend_dialog|updaterift|`wCancel|`wUpdate|";
	GamePacket p = packetEnd(appendString(appendString(createPacket(), "OnDialogRequest"), dialog));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
bool isHerez(ENetPeer* peer, ENetPeer* peer2)
{
	return ((PlayerInfo*)(peer->data))->currentWorld == ((PlayerInfo*)(peer2->data))->currentWorld;
}
class GTDialog
{
public:
	string dialogstr = "";
	void appendStart();
	void addSpacer(SpacerTypes type);
	void addLabelWithIcon(string text, int tileid, LabelStyles type);
	void addLabelWithIconButton(string text, int tileid, string buttontext);
	void addButton(string buttonname, string buttontext);
	void addPicker(string pickername, string pickertext, string headText);
	void addCheckbox(string checkboxname, string string, CheckboxTypes type);
	void addTextBox(string str);
	void addSmallText(string str);
	void addItemWithCustomText(string itemID, string textUnderButton, string buttonName);
	void addStaticBlueFrame(string itemID, string textUnderFrame, string buttonName, bool isEndLine);
	void addInputBox(string name, string text, string cont, int size);
	void addStaticBlueFrameWithIdCountText(string itemID, string count, string textUnderFrame, string buttonName, bool isEndLine);
	void addQuickExit();
	void addNewLineAfterFrame();
	void endDialog(string name, string accept, string nvm);
	void addCustom(string name);
	string finishDialog() const;

	explicit operator string() const
	{
		return this->dialogstr;
	}
};

inline void GTDialog::addSpacer(const SpacerTypes type)
{
	switch (type)
	{
	case SPACER_BIG:
		this->dialogstr.append("add_spacer|big|\n");
		break;
	case SPACER_SMALL:
		this->dialogstr.append("add_spacer|small|\n");
		break;
	default:
		break;
	}
}

inline void GTDialog::addItemWithCustomText(const string itemID, const string textUnderButton, const string buttonName)
{
	this->dialogstr.append("\nadd_button_with_icon|" + buttonName + "|" + textUnderButton + "|staticBlueFrame|" + itemID + "|");
}

inline void GTDialog::addNewLineAfterFrame()
{
	this->dialogstr.append("\nadd_button_with_icon||END_LIST|noflags|0|0|");
}

inline void GTDialog::addPicker(const string pickername, const string pickertext, const string headText)
{
	this->dialogstr.append("\nadd_item_picker|" + pickername + "|" + pickertext + "|" + headText + "|");
}

inline void GTDialog::addStaticBlueFrame(const string itemID, const string textUnderFrame, const string buttonName, const bool isEndLine)
{
	if (isEndLine == false)
	{
		this->dialogstr.append("\nadd_button_with_icon|" + buttonName + "||staticBlueFrame|" + itemID + "|" + textUnderFrame + "|");
	}
	else
	{
		this->dialogstr.append("\nadd_button_with_icon||END_LIST|noflags|0|0|\nadd_button_with_icon|" + buttonName + "||staticBlueFrame|" + itemID + "|" + textUnderFrame + "|");
	}
}

inline void GTDialog::addStaticBlueFrameWithIdCountText(const string itemID, string count, const string textUnderFrame, const string buttonName, const bool isEndLine)
{
	if (isEndLine == false)
	{
		this->dialogstr.append("\nadd_button_with_icon|" + buttonName + "|" + textUnderFrame + "|frame|" + itemID + "|" + count + "|");
	}
	else
	{
		this->dialogstr.append("\nadd_button_with_icon||END_LIST|noflags|0|0|\nadd_button_with_icon|" + buttonName + "|" + textUnderFrame + "|frame|" + itemID + "|" + count + "|");
	}
}

inline void GTDialog::addLabelWithIcon(const string text, const int tileid, const LabelStyles type)
{
	switch (type)
	{
	case LABEL_BIG:
		this->dialogstr.append("add_label_with_icon|big|" + text + "|left|" + to_string(tileid) + "|\n");
		break;
	case LABEL_SMALL:
		this->dialogstr.append("add_label_with_icon|small|" + text + "|left|" + to_string(tileid) + "|\n");
		break;
	default:
		break;
	}
}

inline void GTDialog::addLabelWithIconButton(const string text, const int tileid, const string buttontext)
{
	this->dialogstr.append("add_label_with_icon_button|mid|" + text + "|left|" + to_string(tileid) + "|" + buttontext + "|\n");
}

inline void GTDialog::addButton(const string buttonname, const string buttontext)
{
	this->dialogstr.append("add_button|" + buttonname + "|" + buttontext + "|noflags|0|0|\n");
}

inline void GTDialog::addCheckbox(const string checkboxname, const string string, const CheckboxTypes type)
{
	switch (type)
	{
	case CHECKBOX_SELECTED:
		this->dialogstr.append("add_checkbox|" + checkboxname + "|" + string + "|1|\n");
		break;
	case CHECKBOX_NOT_SELECTED:
		this->dialogstr.append("add_checkbox|" + checkboxname + "|" + string + "|0|\n");
		break;
	default:
		break;
	}
}

inline void GTDialog::appendStart()
{
	this->dialogstr.append("text_scaling_string|Dirttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt|\nset_default_color|\n");
}

inline void GTDialog::addTextBox(const string str)
{
	this->dialogstr.append("add_textbox|" + str + "|left|\n");
}

inline void GTDialog::addSmallText(const string str)
{
	this->dialogstr.append("add_smalltext|" + str + "|\n");
}

inline void GTDialog::addInputBox(const string name, const string text, const string cont, const int size)
{
	this->dialogstr.append("add_text_input|" + name + "|" + text + "|" + cont + "|" + to_string(size) + "|\n");
}

inline void GTDialog::addQuickExit()
{
	this->dialogstr.append("add_quick_exit|\n");
}

inline void GTDialog::endDialog(const string name, const string accept, const string nvm)
{
	this->dialogstr.append("end_dialog|" + name + "|" + nvm + "|" + accept + "|\n");
}

inline void GTDialog::addCustom(const string name)
{
	this->dialogstr.append(name + "\n");
}

inline string GTDialog::finishDialog() const
{
	return this->dialogstr;
}
namespace Player {
	static void OnCountdownStart(ENetPeer* peer, int netID, int time, int score) {
		gamepacket_t p(0, netID);
		if (score == -1) {
			p.Insert("OnCountdownStart"), p.Insert(time);
		}
		else
		{
			p.Insert("OnCountdownStart"), p.Insert(time), p.Insert(time);
		}
		p.CreatePacket(peer);
	}
	static void OnConsoleMessage(ENetPeer* peer, string message) {
		gamepacket_t p;
		p.Insert("OnConsoleMessage"), p.Insert(message);
		p.CreatePacket(peer);
	}
	static void OnConsoleMessageWithTime(ENetPeer* peer, string message, int ms) {
		gamepacket_t p(ms);
		p.Insert("OnConsoleMessage"), p.Insert(message);
		p.CreatePacket(peer);
	}
	static void OnKilled(ENetPeer* peer, int netID) {
		gamepacket_t p(0, netID);
		p.Insert("OnKilled");
		p.CreatePacket(peer);
	}
	static void OnSetPos(ENetPeer* peer, int netID, int x, int y, int ms) {
		gamepacket_t p(0, netID);
		p.Insert("OnSetPos"), p.Insert(x, y);
		p.CreatePacket(peer);
	}

	static void OnSetFreezeState(ENetPeer* peer, int state, int netID) {
		gamepacket_t p(0, netID);
		p.Insert("OnSetFreezeState"), p.Insert(state);
		p.CreatePacket(peer);
	}
	static void OnFailedToEnterWorld(ENetPeer* peer) {
		gamepacket_t p;
		p.Insert("OnFailedToEnterWorld"), p.Insert(1);
		p.CreatePacket(peer);
	}

	static void OnZoomCamera(ENetPeer* peer, float value1, int value2) {
		gamepacket_t p;
		p.Insert("OnZoomCamera"), p.Insert(value1), p.Insert(value2);
		p.CreatePacket(peer);
	}

	static void OnAddNotification(ENetPeer* peer, string text, string audiosound, string interfaceimage)
	{
		gamepacket_t p;
		p.Insert("OnAddNotification"), p.Insert(interfaceimage), p.Insert(text), p.Insert(audiosound), p.Insert(0);
		p.CreatePacket(peer);
	}

	static void SmoothZoom(ENetPeer* peer) {
		gamepacket_t p;
		p.Insert("OnZoomCamera"), p.Insert(10000.0f), p.Insert(1000);
		p.CreatePacket(peer);
	}
	static void SetRespawnPos(ENetPeer* peer, int posX, int posY, int netID) {
		gamepacket_t p(0, netID);
		p.Insert("SetRespawnPos"), p.Insert(posX + posY); // (world->width * posY)
		p.CreatePacket(peer);
	}

	static void OnTradeStatus(ENetPeer* peer, int netID, string statustext, string items, string locked)
	{
		//"add_slot|20|3locked|0reset_locks|1accepted|1"
		gamepacket_t p;
		p.Insert("OnTradeStatus"), p.Insert(netID), p.Insert(items), p.Insert(statustext), p.Insert(locked);
		p.CreatePacket(peer);
	}
	static void OnChangeSkin(ENetPeer* peer, int skinColor, int netID) {
		gamepacket_t p(0, netID);
		p.Insert("OnChangeSkin"), p.Insert(skinColor);
		p.CreatePacket(peer);
	}
	static void OnSpawn(ENetPeer* peer, int netID, int userID, int posX, int posY, string name, string country, int invis, int modstate, int supermodstate)
	{
		gamepacket_t p;
		p.Insert("OnSpawn"), p.Insert("spawn|avatar\nnetID|" + std::to_string(netID) + "\nuserID|" + std::to_string(userID) + "\ncolrect|0|0|20|30\nposXY|" + std::to_string(posX) + "|" + std::to_string(posY) + "\nname|``" + name + "``\ncountry|" + country + "\ninvis|" + to_string(invis) + "\nmstate|" + to_string(modstate) + "\nsmstate|" + to_string(supermodstate) + "\ntype|local\n");
		p.CreatePacket(peer);
	}


	static void OnStartTrade(ENetPeer* peer, string displayName, int netID)
	{
		gamepacket_t p;
		p.Insert("OnStartTrade"), p.Insert(displayName), p.Insert(netID);
		p.CreatePacket(peer);
	}

	static void OnForceTradeEnd(ENetPeer* peer)
	{
		gamepacket_t p;
		p.Insert("OnForceTradeEnd");
		p.CreatePacket(peer);
	}

	static void OnNameChanged(ENetPeer* peer, int netID, string name)
	{
		gamepacket_t p(0, netID);
		p.Insert("OnNameChanged"), p.Insert("`0`0" + name);
		ENetPeer* currentPeer;
		for (currentPeer = server->peers;
			currentPeer < &server->peers[server->peerCount];
			++currentPeer)
		{
			if (currentPeer->state != ENET_PEER_STATE_CONNECTED || currentPeer->data == NULL) continue;
			if (isHerez(peer, currentPeer)) {
				p.CreatePacket(currentPeer);
			}
		}
	}
	static void OnTextOverlay(ENetPeer* peer, string text) {
		gamepacket_t p;
		p.Insert("OnTextOverlay");
		p.Insert(text);
		p.CreatePacket(peer);
	}

	static void OnSetBux(ENetPeer* peer, int gems, int accountstate)
	{
		gamepacket_t p;
		p.Insert("OnSetBux");
		p.Insert(gems), p.Insert(accountstate);
		p.CreatePacket(peer);
	}

	static void OnDialogRequest(ENetPeer* peer, string message) {
		gamepacket_t p;
		p.Insert("OnDialogRequest");
		p.Insert(message);
		p.CreatePacket(peer);
	}
	static void OnSendToServer(ENetPeer* peer, int userID, int token, string ip, int port, string doorId, int lmode)
	{
		gamepacket_t p;
		p.Insert("OnSendToServer"), p.Insert(port), p.Insert(token), p.Insert(userID), p.Insert(ip + "|" + doorId), p.Insert(lmode);
		p.CreatePacket(peer);
	}

	static void OnParticleEffect(ENetPeer* peer, int effect, float x, float y, int delay) {
		gamepacket_t p(delay);
		p.Insert("OnParticleEffect"), p.Insert(effect), p.Insert(x, y);
		p.CreatePacket(peer);
	}

	static void OnConsoleMessageAll(string message) {
		gamepacket_t p;
		p.Insert("OnConsoleMessage"), p.Insert(message);
		ENetPeer* currentPeer;
		for (currentPeer = server->peers;
			currentPeer < &server->peers[server->peerCount];
			++currentPeer)
		{
			if (currentPeer->state != ENET_PEER_STATE_CONNECTED)
				continue;
			p.CreatePacket(currentPeer);
		}
	}

	static void PlayAudio(ENetPeer* peer, string audioFile, int delayMS)
	{
		string text = "action|play_sfx\nfile|" + audioFile + "\ndelayMS|" + to_string(delayMS) + "\n";
		BYTE* data = new BYTE[5 + text.length()];
		BYTE zero = 0;
		int type = 3;
		memcpy(data, &type, 4);
		memcpy(data + 4, text.c_str(), text.length());
		memcpy(data + 4 + text.length(), &zero, 1);
		ENetPacket* packet = enet_packet_create(data,
			5 + text.length(),
			ENET_PACKET_FLAG_RELIABLE);

		enet_peer_send(peer, 0, packet);
		delete[] data;
	}
	static void OnTalkBubble(ENetPeer* peer, int netID, string message, bool stay) {
		if (message.length() == 0 || message.length() > 100) return;
		gamepacket_t p;
		p.Insert("OnTalkBubble"), p.Insert(netID), p.Insert(message), p.Insert(0), p.Insert(stay ? 1 : 0);
		p.CreatePacket(peer);
	}

	static void OnPlayPositioned(ENetPeer* peer, string audiofile, int netID, bool broadcastInWorld, ENetPacket* pk) // packet only externally used when broadcasting / sending to multiple players to reduce memory leaks / cpu usage cuz we dont want to loop creating the packet for each player that would be insanely stupid.
	{
		if (broadcastInWorld) {
			ENetPeer* currentPeer;

			for (currentPeer = server->peers;
				currentPeer < &server->peers[server->peerCount];
				++currentPeer)
			{
				if (currentPeer->state != ENET_PEER_STATE_CONNECTED)
					continue;
				if (isHerez(peer, currentPeer)) {
					enet_peer_send(currentPeer, 0, pk);
				}
			}
		}
		else
		{
			gamepacket_t p(0, netID);
			p.Insert("OnPlayPositioned"), p.Insert(audiofile);
			p.CreatePacket(peer);
		}
	}

};
void SendWebhook(string message, string type) {
	gamepacket_t p;
	p.Insert("OnConsoleMessage"), p.Insert("`e[`wM`e] `o" + message);
	for (ENetPeer* currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer) {
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED || currentPeer->data == NULL) continue;
		if (!((PlayerInfo*)(currentPeer->data))->radio)
			continue;
		if (((PlayerInfo*)(currentPeer->data))->adminLevel >= 1) {
			p.CreatePacket(currentPeer);
		}
	}
}
bool world_exist(string name) {
	return experimental::filesystem::exists("worlds/" + name + ".json");
}
int GetPriceForInventory(int currentInv) {
	return 10 * currentInv;
}
int GetMaxExpForNextLevel(int level) {
	return 150 * level;
}

