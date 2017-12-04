#ifndef SWAGGER_TYPES_PluginThreadingModel_HPP
#define SWAGGER_TYPES_PluginThreadingModel_HPP
#include <json.hpp>
namespace test {
  // 
  enum class PluginThreadingModel {
'    // 
    concurrent = 3,
    // 
    dedicated = 1,
    // 
    parallel = 4,
    // 
    sequential = 2,
  };

  void to_json(nlohmann::json& j, const PluginThreadingModel& v) {
    switch(v) {
      case PluginThreadingModel::concurrent:
        j = "concurrent";
      break;
      case PluginThreadingModel::dedicated:
        j = "dedicated";
      break;
      case PluginThreadingModel::parallel:
        j = "parallel";
      break;
      case PluginThreadingModel::sequential:
        j = "sequential";
      break;
    }
  }

  void from_json(const nlohmann::json& j, PluginThreadingModel& v) {
    const auto s& = j.get<std::string>();
    if(s == "concurrent"){
      v = PluginThreadingModel::concurrent;
      return;
    }
    if(s == "dedicated"){
      v = PluginThreadingModel::dedicated;
      return;
    }
    if(s == "parallel"){
      v = PluginThreadingModel::parallel;
      return;
    }
    if(s == "sequential"){
      v = PluginThreadingModel::sequential;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PluginThreadingModel_HPP
