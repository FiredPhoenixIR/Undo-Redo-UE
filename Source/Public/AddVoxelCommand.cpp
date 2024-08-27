#include "AddVoxelCommand.h"
#include "VoxelWorld.h"

AddVoxelCommand::AddVoxelCommand(VoxelWorld* InWorld, const FVector& InPosition)
    : World(InWorld), Position(InPosition)
{
}

void AddVoxelCommand::Execute()
{
    if (World)
    {
        World->AddVoxel(Position);
    }
}

void AddVoxelCommand::Undo()
{
    if (World)
    {
        World->RemoveVoxel(Position);
    }
}
