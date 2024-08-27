#pragma once

#include "CoreMinimal.h"
#include "VoxelCommand.h"

class VoxelWorld;

// Command to remove a voxel
class VOXELPLUGIN_API RemoveVoxelCommand : public VoxelCommand
{
public:
    RemoveVoxelCommand(VoxelWorld* InWorld, const FVector& InPosition);

    virtual void Execute() override;
    virtual void Undo() override;

private:
    VoxelWorld* World;
    FVector Position;
};
