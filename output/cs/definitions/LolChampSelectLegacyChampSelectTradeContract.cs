using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampSelectLegacyChampSelectTradeContract
    {
        [DataMember(Name = "cellId")]
        long CellId { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "state")]
        LolChampSelectLegacyChampSelectTradeState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectLegacyChampSelectTradeContract {\n");
            sb.Append("  CellId: ").Append(CellId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}