const data = [
  { depth: 0, id: "s12j12", parentId: "" },
  { depth: 0, id: "r89n76", parentId: "" },
  { depth: 1, id: "s33k33", parentId: "s12j12" },
  { depth: 1, id: "s22p22", parentId: "s12j12" },
  { depth: 1, id: "r90p22", parentId: "r89n76" },
  { depth: 1, id: "r02l22", parentId: "r89n76" },
  { depth: 2, id: "r98p98", parentId: "r90p22" },
  { depth: 2, id: "r37u37", parentId: "r90p22" },
  { depth: 2, id: "r55m55", parentId: "r90p22" },
  { depth: 3, id: "r45m55", parentId: "r37u37" },
  { depth: 2, id: "s78j75", parentId: "s22p22" },
  { depth: 2, id: "s00j15", parentId: "s22p22" },
];

var subTree = [];

const getATree = (root) => {
  let rootObj = {};

  data.forEach((node) => {
    if (node.id === root) {
      rootObj = node;
    }
  });

  const childrenOfRoot = data.filter(node =>{
     return(
        (node.depth === rootObj.depth + 1 && node.parentId === rootObj.id)
     )
  });

  if(childrenOfRoot.length === 0){
      return;
  }else{
      childrenOfRoot.forEach(e => subTree.push(e));
      childrenOfRoot.forEach(e => getATree(e.id));
  }
};

const root = "r89n76";
getATree(root);

if(subTree.length === 0){
    console.log("NO SUB-TREE OF GIVEN ROOT EXISTS!");
}else{
    console.log(`SUB-TREE FOR "${root}" :`);
    console.table(subTree);
}
