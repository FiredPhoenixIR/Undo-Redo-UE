#pragma once

#include "CoreMinimal.h"

// Base class for all voxel commands
class VOXELPLUGIN_API VoxelCommand
{
public:
    virtual ~VoxelCommand() = default;

    // Executes the command
    virtual void Execute() = 0;

    // Undoes the command
    virtual void Undo() = 0;
};
