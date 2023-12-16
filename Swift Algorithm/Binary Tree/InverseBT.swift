import Foundation

public class TreeNode {
    public var val: Int
    public var left: TreeNode?
    public var right: TreeNode?
    public init() {
        self.val = 0;
        self.left = nil;
        self.right = nil;
    }
    
    public init(_ val: Int) {
        self.val = val;
        self.left = nil;
        self.right = nil;
    }

    public init(_ val: Int, _ left: TreeNode?, _ right: TreeNode?) {
        self.val = val
        self.left = left
        self.right = right
    }
}

func invertTree(_ root: TreeNode?) -> TreeNode? {
    guard let root = root else { return nil }
    
    let temp = root.left
    root.left = root.right
    root.right = temp
    
    invertTree(root.left)
    invertTree(root.right)
    return root
}

let node1 = TreeNode(1)
let node3 = TreeNode(3)

let node6 = TreeNode(6)
let node9 = TreeNode(9)

let node2 = TreeNode(2, node1, node3)
let node7 = TreeNode(7, node6, node9)

let tree = TreeNode(4, node2, node7)

invertTree(tree)
print(tree.left?.left?.val)
print(tree.right?.val)
