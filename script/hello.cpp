#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPlugin_s : public WorldPlugin
  {
    public: WorldPlugin_s() : WorldPlugin()
            {
              printf("Welcome to 's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPlugin_s)
}
