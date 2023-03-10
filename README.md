# How to use/install mission?

1. Create a folder called dayzoffline.Vis_Island in your server's mpmissions directory, and extract the Mission Files there.

2. Edit serverdz.cfg (in your DayZServer direcory). Near the bottom, define mission as dayzoffline.Vis_Island, then save. 

`template="dayzOffline.Vis_Island"; // Mission to load on server startup. <MissionName>.<TerrainName>`

3. Copy @Vis_Island mod to your DayZServer directory.

4. Add @Vis_Island mod to your server .bat, or management software.

`"-mod=@Vis_Island;"`

# How to update mission
1. Delete the contents of your mission folder ( dayzoffline.Vis_Island), **except for the Storage folder**. These are your persistence files.

2. Place new mission files in your mission folder.

3. Navigate to dayzoffline.Vis_Island\storage\data and delete types.001, types.002, and types.bin to reinitialize the loot table.

# Updating Loot/Mapgrouppos (end-user)
We recommend you update mapgrouppos/mpgroupcluster xml's yourself after updates, or when adding your own map object's.

1)Edit init.c, found within your mission folder. Add these lines to the bottom of void main() :

`GetCEApi().ExportProxyData( "7500 0 7500", 15000 );  // Generate mapgrouppos.xml`

`GetCEApi().ExportClusterData();                    // Generate mapgroupcluster.xml`

2. Start server, and an export folder will be created. dayzoffline.Vis_Island/Storage/export. Within, you'll find your new XML's. This may take some time depending on system performance. 

3. Stop server. Copy/paste your new .xml's to dayzoffline.Vis_Island. 

4. Lastly, comment out the export line we added to init.c.
