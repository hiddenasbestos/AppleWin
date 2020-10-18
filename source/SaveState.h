#pragma once

extern bool       g_bSaveStateOnExit;

void Snapshot_SetFilename(const std::string& filename, const std::string& path="");
const std::string& Snapshot_GetFilename();
const std::string& Snapshot_GetPath();
void    Snapshot_LoadState();
void    Snapshot_SaveState();
void    Snapshot_Startup();
void    Snapshot_Shutdown();
