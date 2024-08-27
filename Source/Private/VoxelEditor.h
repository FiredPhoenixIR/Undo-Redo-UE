#pragma once

#include "CoreMinimal.h"
#include "CommandManager.h"

class VoxelWorld;

// Voxel editor class that interacts with the command system
class VOXELPLUGIN_API VoxelEditor
{
public:
    VoxelEditor(VoxelWorld* InWorld);

    void AddVoxel(const FVector& Position);
    void RemoveVoxel(const FVector& Position);
    void Undo();
    void Redo();

private:
    VoxelWorld* World;
    CommandManager* CmdManager;
};