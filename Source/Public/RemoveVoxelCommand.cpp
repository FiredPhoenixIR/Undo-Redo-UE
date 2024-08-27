#include "RemoveVoxelCommand.h"
#include "VoxelWorld.h"

RemoveVoxelCommand::RemoveVoxelCommand(VoxelWorld* InWorld, const FVector& InPosition)
    : World(InWorld), Position(InPosition)
{
}

void RemoveVoxelCommand::Execute()
{
    if (World)
    {
        World->RemoveVoxel(Position);
    }
}

void RemoveVoxelCommand::Undo()
{
    if (World)
    {
        World->AddVoxel(Position);
    }
}