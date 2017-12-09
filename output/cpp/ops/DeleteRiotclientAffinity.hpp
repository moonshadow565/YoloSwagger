#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Deletes the current runtime affinity of the application.
  void DeleteRiotclientAffinity (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/riotclient/affinity";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
