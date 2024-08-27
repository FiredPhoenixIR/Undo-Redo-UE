#pragma once

#include "CoreMinimal.h"
#include "VoxelCommand.h"

class VoxelWorld;

// Command to add a voxel
class VOXELPLUGIN_API AddVoxelCommand : public VoxelCommand
{
public:
    AddVoxelCommand(VoxelWorld* InWorld, const FVector& InPosition);

    virtual void Execute() override;
    virtual void Undo() override;

private:
    VoxelWorld* World;
    FVector Position;
};
