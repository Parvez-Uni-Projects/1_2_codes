public class Product {

    private int productID;
    private double productWeight;

    public Product prodObj;
    
    Product(Product prodObj){
        
    }
    
    public Product(){

    }
    public int getproductID() {
        return productID;
    }
    public void setproductID(int productID) {
        this.productID = productID;
    }

    public double getProductWeight() {
        return productWeight;
    }

    public void setProductWeight(double productWeight) {
        this.productWeight = productWeight;
    }

    public Product checkAndGenerate(int NewproductID, double newProductWeight){

        Product p = new Product();
        
        p.setproductID(NewproductID);
        p.setProductWeight(newProductWeight);

        return p;
    } 

    public Product checkAndGenerate(int NewproductID)
    {
        Product p = new Product();
        if (NewproductID %2 == 0)
            {
                p.productID = NewproductID;
                p.productWeight =this.productWeight;     
            }  
        return p;
    }

    public Product checkAndGenerate(double NewProductWeight)
    {
        Product p = new Product();
        if (NewProductWeight > 50)
            {
                p.productWeight = NewProductWeight;
                p.productID = this.productID;
            }

            return p;
    }

    public Product checkAndGenerate(Product p1){

        Product p = new Product();
        p.productID = p1.productID + this.productID;
        p.productWeight = p1.productWeight + this.productWeight;

        return p;

    }

    public Product checkAndgenerate(int productID1, int productID2)
    {
        Product p = new Product();

        if(productID1 > productID2 )
        {
            p.productID=productID1 + this.productID;
            p.productWeight=this.productWeight;
        }
        else
        {
            p.productID=productID2 + this.productID;
            p.productWeight=this.productWeight;

        }
        return p;
    }

    public Product checkAndgenerate(double productWeight1, double productWeight2)
    {
        Product p = new Product();

        if(productWeight1 > 50 )
        {
            p.productID=this.productID;
            p.productWeight=productWeight1+this.productWeight;
        }
        else if (productWeight2 > 50 )
        {
            p.productID=this.productID;
            p.productWeight=productWeight2+this.productWeight;
        }
        else if(productWeight1 > 50 && productWeight2 > 50)
        {
            p.productID=this.productID;
            p.productWeight=productWeight1+productWeight2+this.productWeight;
        }
        return p;
    }  
}
